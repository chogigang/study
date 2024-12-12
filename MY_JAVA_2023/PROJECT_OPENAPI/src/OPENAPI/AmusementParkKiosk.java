package OPENAPI;

import java.awt.EventQueue;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.io.RandomAccessFile;
import java.text.SimpleDateFormat;
import java.util.Date;
import javax.swing.*;

public class AmusementParkKiosk {

    private JFrame frame;
    private int adultCount = 0;
    private int childCount = 0;
    private int seniorCount = 0;

    private static final double ADULT_PRICE = 50000;
    private static final double CHILD_PRICE = 30000;
    private static final double SENIOR_PRICE = 20000;
    private static final double GROUP_DISCOUNT_RATE = 0.15; // 15% 할인

    private double totalAmount = 0;
    private double discountAmount = 0;
    private double finalAmount = 0;
    private boolean telecomDiscountApplied = false;

    private JLabel lblTotalAmount;
    private JLabel lblDiscountAmount;
    private JLabel lblFinalAmount;
    private JLabel lblPaymentMethod;
    private JLabel lblGroupDiscount;
    private JLabel lblTelecomDiscount;
    private JButton btnSalesView;  // 매출 조회 버튼

    private String paymentMethod = "카드"; // 초기 결제 방식

    public static void main(String[] args) {
        EventQueue.invokeLater(() -> {
            try {
                AmusementParkKiosk window = new AmusementParkKiosk();
                window.frame.setVisible(true);
            } catch (Exception e) {
                e.printStackTrace();
            }
        });
    }

    public AmusementParkKiosk() {
        initialize();
    }

    private void initialize() {
        frame = new JFrame();
        frame.setTitle("놀이동산 키오스크");
        frame.setBounds(100, 100, 600, 480);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.getContentPane().setLayout(null);
        
        btnSalesView = new JButton("매출 조회");
        btnSalesView.setBounds(420, 150, 120, 30);
        frame.getContentPane().add(btnSalesView);

        btnSalesView.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                String inputPassword = JOptionPane.showInputDialog(frame, "비밀번호를 입력하세요.");
                if ("0000".equals(inputPassword)) {
                    showSalesWindow();  // 비밀번호가 맞으면 매출 조회 창을 보여준다.
                } else {
                    JOptionPane.showMessageDialog(frame, "비밀번호가 틀렸습니다.", "오류", JOptionPane.ERROR_MESSAGE);
                }
            }
        });

        JLabel lblAdult = new JLabel("대인 (50,000원)");
        lblAdult.setBounds(30, 30, 150, 25);
        frame.getContentPane().add(lblAdult);

        JButton btnAdultPlus = new JButton("+");
        btnAdultPlus.setBounds(200, 30, 50, 25);
        frame.getContentPane().add(btnAdultPlus);

        JButton btnAdultMinus = new JButton("-");
        btnAdultMinus.setBounds(260, 30, 50, 25);
        frame.getContentPane().add(btnAdultMinus);

        JLabel lblAdultCount = new JLabel("0명");
        lblAdultCount.setBounds(320, 30, 50, 25);
        frame.getContentPane().add(lblAdultCount);

        JLabel lblChild = new JLabel("소인 (30,000원)");
        lblChild.setBounds(30, 70, 150, 25);
        frame.getContentPane().add(lblChild);

        JButton btnChildPlus = new JButton("+");
        btnChildPlus.setBounds(200, 70, 50, 25);
        frame.getContentPane().add(btnChildPlus);

        JButton btnChildMinus = new JButton("-");
        btnChildMinus.setBounds(260, 70, 50, 25);
        frame.getContentPane().add(btnChildMinus);

        JLabel lblChildCount = new JLabel("0명");
        lblChildCount.setBounds(320, 70, 50, 25);
        frame.getContentPane().add(lblChildCount);

        JLabel lblSenior = new JLabel("노약자 (20,000원)");
        lblSenior.setBounds(30, 110, 150, 25);
        frame.getContentPane().add(lblSenior);

        JButton btnSeniorPlus = new JButton("+");
        btnSeniorPlus.setBounds(200, 110, 50, 25);
        frame.getContentPane().add(btnSeniorPlus);

        JButton btnSeniorMinus = new JButton("-");
        btnSeniorMinus.setBounds(260, 110, 50, 25);
        frame.getContentPane().add(btnSeniorMinus);

        JLabel lblSeniorCount = new JLabel("0명");
        lblSeniorCount.setBounds(320, 110, 50, 25);
        frame.getContentPane().add(lblSeniorCount);

        lblTotalAmount = new JLabel("총액: 0원");
        lblTotalAmount.setBounds(30, 200, 200, 25);
        frame.getContentPane().add(lblTotalAmount);

        lblDiscountAmount = new JLabel("할인: 0원");
        lblDiscountAmount.setBounds(30, 230, 200, 25);
        frame.getContentPane().add(lblDiscountAmount);

        lblFinalAmount = new JLabel("최종 금액: 0원");
        lblFinalAmount.setBounds(30, 260, 200, 25);
        frame.getContentPane().add(lblFinalAmount);

        lblPaymentMethod = new JLabel("결제 방식: 카드");
        lblPaymentMethod.setBounds(30, 290, 200, 25);
        frame.getContentPane().add(lblPaymentMethod);

        lblGroupDiscount = new JLabel("단체 할인: 미적용");
        lblGroupDiscount.setBounds(30, 320, 200, 25);
        frame.getContentPane().add(lblGroupDiscount);

        lblTelecomDiscount = new JLabel("통신사 할인: 미적용");
        lblTelecomDiscount.setBounds(30, 350, 200, 25);
        frame.getContentPane().add(lblTelecomDiscount);

        JButton btnTelecomDiscount = new JButton("통신사 할인");
        btnTelecomDiscount.setBounds(28, 400, 120, 30);
        frame.getContentPane().add(btnTelecomDiscount);

        JButton btnCardPayment = new JButton("카드 결제");
        btnCardPayment.setBounds(160, 400, 120, 30);
        frame.getContentPane().add(btnCardPayment);

        JButton btnCashPayment = new JButton("현금 결제");
        btnCashPayment.setBounds(290, 400, 120, 30);
        frame.getContentPane().add(btnCashPayment);

        JButton btnFinalizePayment = new JButton("결제 완료");
        btnFinalizePayment.setBounds(420, 400, 120, 30);
        frame.getContentPane().add(btnFinalizePayment);

        btnAdultPlus.addActionListener(e -> {
            adultCount++;
            lblAdultCount.setText(adultCount + "명");
            updateAmounts();
        });

        btnAdultMinus.addActionListener(e -> {
            if (adultCount > 0) {
                adultCount--;
                lblAdultCount.setText(adultCount + "명");
                updateAmounts();
            }
        });

        btnChildPlus.addActionListener(e -> {
            childCount++;
            lblChildCount.setText(childCount + "명");
            updateAmounts();
        });

        btnChildMinus.addActionListener(e -> {
            if (childCount > 0) {
                childCount--;
                lblChildCount.setText(childCount + "명");
                updateAmounts();
            }
        });

        btnSeniorPlus.addActionListener(e -> {
            seniorCount++;
            lblSeniorCount.setText(seniorCount + "명");
            updateAmounts();
        });

        btnSeniorMinus.addActionListener(e -> {
            if (seniorCount > 0) {
                seniorCount--;
                lblSeniorCount.setText(seniorCount + "명");
                updateAmounts();
            }
        });

        btnTelecomDiscount.addActionListener(e -> {
            telecomDiscountApplied = !telecomDiscountApplied;
            lblTelecomDiscount.setText("통신사 할인: " + (telecomDiscountApplied ? "적용됨" : "미적용"));
            updateAmounts();
        });

        btnCardPayment.addActionListener(e -> {
            paymentMethod = "카드";
            lblPaymentMethod.setText("결제 방식: 카드");
        });

        btnCashPayment.addActionListener(e -> {
            paymentMethod = "현금";
            lblPaymentMethod.setText("결제 방식: 현금");
        });

        btnFinalizePayment.addActionListener(e -> showReceiptWindow());
    }

    private void updateAmounts() {
        totalAmount = adultCount * ADULT_PRICE + childCount * CHILD_PRICE + seniorCount * SENIOR_PRICE;

        discountAmount = 0;

        if (adultCount + childCount + seniorCount >= 10) {
            discountAmount += totalAmount * GROUP_DISCOUNT_RATE;
            lblGroupDiscount.setText("단체 할인: 적용됨");
        } else {
            lblGroupDiscount.setText("단체 할인: 미적용");
        }

        if (telecomDiscountApplied) {
            discountAmount += totalAmount * 0.10;
        }

        finalAmount = Math.max(totalAmount - discountAmount, 0); // 최종 금액은 0 이하로 내려갈 수 없음
        lblTotalAmount.setText("총액: " + (int) totalAmount + "원");
        lblDiscountAmount.setText("할인: " + (int) discountAmount + "원");
        lblFinalAmount.setText("최종 금액: " + (int) finalAmount + "원");
    }

    private void showReceiptWindow() {
        JFrame receiptFrame = new JFrame("결제 전표");
        receiptFrame.setSize(400, 300);
        receiptFrame.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);

        JTextArea receiptTextArea = new JTextArea();
        receiptTextArea.setEditable(false);
        receiptTextArea.setText(String.format(
                "결제 내역:\n" +
                        "대인: %d명\n" +
                        "소인: %d명\n" +
                        "노약자: %d명\n" +
                        "결제 방식: %s\n" +
                        "단체 할인: %s\n" +
                        "통신사 할인: %s\n" +
                        "할인 금액: %d원\n" +
                        "최종 결제 금액: %d원\n",
                adultCount, childCount, seniorCount, paymentMethod,
                (adultCount + childCount + seniorCount >= 10 ? "적용됨" : "미적용"),
                (telecomDiscountApplied ? "적용됨" : "미적용"),
                (int) discountAmount, (int) finalAmount));

        JScrollPane scrollPane = new JScrollPane(receiptTextArea);
        receiptFrame.getContentPane().add(scrollPane);
        receiptFrame.setVisible(true);

        saveTransaction();
    }

    private void saveTransaction() {
        String currentDate = new SimpleDateFormat("yyyy-MM-dd").format(new Date());
        String currentTime = new SimpleDateFormat("HH:mm:ss").format(new Date());
        String currentMonth = new SimpleDateFormat("MM").format(new Date()); // 월 정보
        String currentYearMonth = new SimpleDateFormat("yyyy-MM").format(new Date()); // 연-월 정보

        // 1. 일일 매출 기록 파일
        String dailyFileName = String.format("amusement_park_sales_%s.csv", currentDate);
        try (BufferedWriter writer = new BufferedWriter(new FileWriter(dailyFileName, true))) {
            // 첫 번째 라인에 컬럼명이 없다면 추가
            if (new File(dailyFileName).length() == 0) {
                writer.write("시간,대인,소인,노약자,결제 방식,단체 할인,통신사 할인,할인 금액,최종 금액\n");
            }

            // 일일 매출 기록
            writer.write(String.format("%s,%d,%d,%d,%s,%s,%s,%d,%d\n",
                    currentTime, adultCount, childCount, seniorCount, paymentMethod,
                    (adultCount + childCount + seniorCount >= 10 ? "적용됨" : "미적용"),
                    (telecomDiscountApplied ? "적용됨" : "미적용"),
                    (int) discountAmount, (int) finalAmount));

        } catch (IOException e) {
            JOptionPane.showMessageDialog(frame, "일일 매출 저장 중 오류 발생: " + e.getMessage(), "오류", JOptionPane.ERROR_MESSAGE);
        }

        // 월 매출 기록 파일
        String monthlyFileName = String.format("amusement_park_sales_%s.csv", currentYearMonth);
        File monthlyFile = new File(monthlyFileName);
        double currentMonthTotal = finalAmount;
        StringBuilder fileContent = new StringBuilder();
        boolean isMonthFound = false;

        // 월별 매출 파일이 존재한다면 기존 파일을 읽고 매출 합산
        if (monthlyFile.exists()) {
            try (BufferedReader reader = new BufferedReader(new FileReader(monthlyFile))) {
                String line;
                while ((line = reader.readLine()) != null) {
                    if (!line.startsWith("월 매출")) { // 기존 매출 데이터 건너뛰기
                        String[] columns = line.split(",");
                        if (columns.length > 1) { // 배열 길이 확인
                            if (columns[0].equals(currentYearMonth)) {
                                // 해당 월이 이미 존재하면 매출을 갱신
                                currentMonthTotal = Double.parseDouble(columns[1]) + finalAmount;
                                isMonthFound = true; // 월이 이미 존재함
                            } else {
                                // 해당 월이 아니면 그대로 파일 내용에 추가
                                fileContent.append(line).append("\n");
                            }
                        }
                    } else {
                        // 첫 번째 라인인 "월 매출"은 그대로 유지
                        fileContent.append(line).append("\n");
                    }
                }
            } catch (IOException e) {
                JOptionPane.showMessageDialog(frame, "월 매출 파일 읽기 중 오류 발생: " + e.getMessage(), "오류", JOptionPane.ERROR_MESSAGE);
            }
        }

        // 월 매출이 처음이라면 컬럼명 추가
        if (!isMonthFound) {
            fileContent.append("년 월,금액\n");
        }

        // 월별 매출이 이미 존재하면 갱신하고, 없으면 새로운 항목 추가
        fileContent.append(String.format("%s,%.0f\n", currentYearMonth, currentMonthTotal));

        // 월 매출 파일에 업데이트
        try (BufferedWriter writer = new BufferedWriter(new FileWriter(monthlyFile))) {
            writer.write(fileContent.toString());
        } catch (IOException e) {
            JOptionPane.showMessageDialog(frame, "월 매출 저장 중 오류 발생: " + e.getMessage(), "오류", JOptionPane.ERROR_MESSAGE);
        }
    }

    
  private void showSalesWindow() {
  JFrame salesFrame = new JFrame("매출 조회");
  salesFrame.setSize(500, 400);
  salesFrame.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
  salesFrame.getContentPane().setLayout(null);

  JButton btnDailySales = new JButton("일일 매출");
  btnDailySales.setBounds(50, 30, 120, 30);
  salesFrame.getContentPane().add(btnDailySales);

  JButton btnMonthlySales = new JButton("월 매출");
  btnMonthlySales.setBounds(200, 30, 120, 30);
  salesFrame.getContentPane().add(btnMonthlySales);

  JTextArea salesTextArea = new JTextArea();
  salesTextArea.setEditable(false);
  JScrollPane scrollPane = new JScrollPane(salesTextArea);
  scrollPane.setBounds(50, 80, 400, 250);
  salesFrame.getContentPane().add(scrollPane);

  // 일일 매출 조회
  btnDailySales.addActionListener(new ActionListener() {
      @Override
      public void actionPerformed(ActionEvent e) {
          String currentDate = new SimpleDateFormat("yyyy-MM-dd").format(new Date());
          String dailyFileName = String.format("amusement_park_sales_%s.csv", currentDate);
          StringBuilder dailySalesContent = new StringBuilder();

          try (BufferedReader reader = new BufferedReader(new FileReader(dailyFileName))) {
              String line;
              while ((line = reader.readLine()) != null) {
                  dailySalesContent.append(line).append("\n");
              }
              salesTextArea.setText(dailySalesContent.toString());
          } catch (IOException ex) {
              salesTextArea.setText("일일 매출 파일을 읽을 수 없습니다.");
          }
      }
  });

  // 월 매출 조회
  btnMonthlySales.addActionListener(new ActionListener() {
      @Override
      public void actionPerformed(ActionEvent e) {
          String currentYearMonth = new SimpleDateFormat("yyyy-MM").format(new Date());
          String monthlyFileName = String.format("amusement_park_sales_%s.csv", currentYearMonth);
          StringBuilder monthlySalesContent = new StringBuilder();

          try (BufferedReader reader = new BufferedReader(new FileReader(monthlyFileName))) {
              String line;
              while ((line = reader.readLine()) != null) {
                  monthlySalesContent.append(line).append("\n");
              }
              salesTextArea.setText(monthlySalesContent.toString());
          } catch (IOException ex) {
              salesTextArea.setText("월 매출 파일을 읽을 수 없습니다.");
          }
      }
  });

  salesFrame.setVisible(true);
}
    

}