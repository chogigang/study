// 2316110250 조기강 

package Test;
import java.awt.EventQueue;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.BoxLayout;
import javax.swing.JButton;
import javax.swing.JOptionPane;
import javax.swing.JScrollPane;
import javax.swing.JTextArea;

import java.text.SimpleDateFormat;
import java.util.Calendar;
import java.util.Date;
import java.util.HashMap;
import java.util.Map;


public class Kiosk {

    private JFrame frame;
    
    
    // 결제 처리 중 여부를 나타내는 변수
    private boolean isProcessingPayment = false;

    // 각 메뉴별 수량
    private int udonCount = 0;
    private int bibimudonCount = 0;
    private int noodlesCount = 0;
    private int bibimnoodlesCount = 0;
    private int udonSariCount = 0;
    private int noodlesSariCount = 0;
    private int riceCount = 0;
    private int colaCount = 0;
    private int ciderCount = 0;
    private int sparklingWaterCount = 0;
    private int bottledWaterCount = 0;

    // 총액 및 할인 금액
    private double totalAmount = 0;
    private double discountAmount = 0;
    private double finalAmount = 0;

    // 가격 상수
    private static final double UDON_PRICE = 5000;
    private static final double BIBIMUDON_PRICE = 6000;
    private static final double NOODLES_PRICE = 4000;
    private static final double BIBIMNOODLES_PRICE = 5500;
    private static final double UDON_SARI_PRICE = 1500;
    private static final double NOODLES_SARI_PRICE = 1200;
    private static final double RICE_PRICE = 1000;
    private static final double COLA_PRICE = 1500;
    private static final double CIDER_PRICE = 1500;
    private static final double SPARKLING_WATER_PRICE = 1000;
    private static final double BOTTLED_WATER_PRICE = 800;

    private JLabel lblTotalAmount;
    private JLabel lblDiscountAmount;
    private JLabel lblFinalAmount;
    
    
    
    private static final String DAILY_SALES_DIRECTORY = "sales_logs/daily/";
    private static final String MONTHLY_SALES_FILE = "sales_logs/monthly_sales.csv";


    // 할인 적용 여부
    private boolean studentDiscountApplied = false;
    private boolean telecomDiscountApplied = false;
    
    // 결제 방법 (카드, 현금)
    private String paymentMethod = "카드";

    // 매출 통계를 위한 변수
    private double dailySales = 0;
    private double monthlySales = 0;

    public static void main(String[] args) {
        EventQueue.invokeLater(new Runnable() {
            public void run() {
                try {
                    Kiosk window = new Kiosk();
                    window.frame.setVisible(true);
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
        });
    }

    public Kiosk() {
        initialize();
        createSalesDirectories();
        initialize();
    }

    private void createSalesDirectories() {
        File dailyDir = new File(DAILY_SALES_DIRECTORY);
        if (!dailyDir.exists()) {
            dailyDir.mkdirs();
        }
    }
    
    private void initialize() {
        frame = new JFrame();
        frame.setTitle("키오스크 프로그램");
        frame.setBounds(100, 100, 736, 512);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.getContentPane().setLayout(null);

        JLabel lblNewLabel = new JLabel("- 국수집 -");
        lblNewLabel.setBounds(328, 10, 67, 27);
        frame.getContentPane().add(lblNewLabel);

        // 식사 메뉴: 우동, 비빔우동, 국수, 비빔국수
        createMenuItem("우동", 16, 60, UDON_PRICE, "udon");
        createMenuItem("비빔우동", 16, 124, BIBIMUDON_PRICE, "bibimudon");
        createMenuItem("국수", 16, 180, NOODLES_PRICE, "noodles");
        createMenuItem("비빔국수", 16, 240, BIBIMNOODLES_PRICE, "bibimnoodles");

        // 사이드 메뉴: 우동사리, 국수사리, 밥
        createSideItem("우동사리", 180, 60, UDON_SARI_PRICE, "udonSari");
        createSideItem("국수사리", 180, 124, NOODLES_SARI_PRICE, "noodlesSari");
        createSideItem("밥", 180, 180, RICE_PRICE, "rice");

        // 음료 메뉴: 콜라, 사이다, 탄산수, 생수
        createDrinkItem("콜라", 380, 60, COLA_PRICE, "cola");
        createDrinkItem("사이다", 380, 124, CIDER_PRICE, "cider");
        createDrinkItem("탄산수", 380, 180, SPARKLING_WATER_PRICE, "sparklingWater");
        createDrinkItem("생수", 380, 240, BOTTLED_WATER_PRICE, "bottledWater");

        // 가격 및 할인 계산 라벨
        lblTotalAmount = new JLabel("총액: 0");
        lblTotalAmount.setBounds(380, 335, 200, 15);
        frame.getContentPane().add(lblTotalAmount);

        lblDiscountAmount = new JLabel("할인금액: 0");
        lblDiscountAmount.setBounds(380, 360, 200, 15);
        frame.getContentPane().add(lblDiscountAmount);

        lblFinalAmount = new JLabel("최종지불액: 0");
        lblFinalAmount.setBounds(380, 385, 200, 15);
        frame.getContentPane().add(lblFinalAmount);

        // 할인 버튼 (학생, 통신사)
        JButton btnStudentDiscount = new JButton("학생 할인");
        btnStudentDiscount.setBounds(112, 311, 97, 23);
        frame.getContentPane().add(btnStudentDiscount);

        JButton btnTelecomDiscount = new JButton("통신사 할인");
        btnTelecomDiscount.setBounds(233, 311, 97, 23);
        frame.getContentPane().add(btnTelecomDiscount);

        // 학생 할인 버튼 클릭 시
        btnStudentDiscount.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                if (!studentDiscountApplied) {
                    discountAmount += totalAmount * 0.30; // 30% 할인
                    studentDiscountApplied = true; // 할인 적용됨
                    btnStudentDiscount.setText("학생 할인 취소");
                } else {
                    discountAmount -= totalAmount * 0.30; // 할인 취소
                    studentDiscountApplied = false; // 할인 취소됨
                    btnStudentDiscount.setText("학생 할인");
                }
                updateFinalAmount();
            }
        });

        // 통신사 할인 버튼 클릭 시
        btnTelecomDiscount.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                if (!telecomDiscountApplied) {
                    discountAmount += totalAmount * 0.10; // 10% 할인
                    telecomDiscountApplied = true; // 할인 적용됨
                    btnTelecomDiscount.setText("통신사 할인 취소");
                } else {
                    discountAmount -= totalAmount * 0.10; // 할인 취소
                    telecomDiscountApplied = false; // 할인 취소됨
                    btnTelecomDiscount.setText("통신사 할인");
                }
                updateFinalAmount();
            }
        });

        // 결제 방법 선택 버튼 (카드, 현금)
        JButton btnCardPayment = new JButton("카드 결제");
        btnCardPayment.setBounds(600, 311, 97, 23);
        frame.getContentPane().add(btnCardPayment);

        JButton btnCashPayment = new JButton("현금 결제");
        btnCashPayment.setBounds(600, 340, 97, 23);
        frame.getContentPane().add(btnCashPayment);

        // 카드 결제 선택 시
        btnCardPayment.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                paymentMethod = "카드";
            }
        });

        // 현금 결제 선택 시
        btnCashPayment.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                paymentMethod = "현금";
            }
        });

        // 결제 버튼 (오른쪽 아래 배치)
        JButton btnPayment = new JButton("결제");
        btnPayment.setBounds(600, 440, 97, 23);
        frame.getContentPane().add(btnPayment);

        // 결제 버튼 클릭 시
        btnPayment.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
            	
                // 결제 시간 기록
                String currentTime = new java.text.SimpleDateFormat("yyyy-MM-dd HH:mm:ss").format(new java.util.Date());
                printReceipt(currentTime);
                
                // 매출 통계 갱신
                dailySales += finalAmount;
                monthlySales += finalAmount;
                // 일일 매출 및 월 매출 CSV 기록
                logDailySales(paymentMethod, finalAmount);  // 일일 매출 기록
            }
        });

        // 매출 통계 버튼 (왼쪽 아래에 추가)
        JButton btnSalesStats = new JButton("매출 통계");
        btnSalesStats.setBounds(16, 440, 97, 23);
        frame.getContentPane().add(btnSalesStats);

     // 매출 통계 버튼 클릭 시
        btnSalesStats.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                // 비밀번호 입력받기
                String password = JOptionPane.showInputDialog("월 매출 통계를 보시려면 비밀번호를 입력하세요.");

                // 입력된 비밀번호 검증
                if (password != null && password.equals("0000")) { // 비밀번호를 "0000"으로 가정
                    showSalesStats(); // 비밀번호가 일치하면 통계 표시
                } else {
                    JOptionPane.showMessageDialog(null, "비밀번호가 틀렸습니다.", "오류", JOptionPane.ERROR_MESSAGE);
                }
            }
        }); // <-- 여기에 추가된 중괄호
    }

    private void createMenuItem(String label, int x, int y, double price, String itemType) {
        // 메뉴명 레이블 위치를 더 넓게 설정
        JLabel itemLabel = new JLabel(label);
        itemLabel.setBounds(x, y, 100, 15); // 메뉴명 레이블 넓이를 더 설정
        frame.getContentPane().add(itemLabel);

        // "+" 버튼
        JButton btnPlus = new JButton("+");
        btnPlus.setBounds(x + 60, y, 51, 23); // 버튼 위치 수정
        frame.getContentPane().add(btnPlus);

        // "-" 버튼
        JButton btnMinus = new JButton("-"); 
        btnMinus.setBounds(x + 60, y + 25, 51, 23); 
        frame.getContentPane().add(btnMinus);

        // 수량 레이블
        JLabel itemCountLabel = new JLabel("수량: 0");
        itemCountLabel.setBounds(x + 120, y, 100, 15);
        frame.getContentPane().add(itemCountLabel);

        // "+" 버튼 클릭 시
        btnPlus.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                incrementCount(itemType);
                updateTotalAmount();
                itemCountLabel.setText("수량: " + getCount(itemType));
            }
        });

        // "-" 버튼 클릭 시
        btnMinus.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                decrementCount(itemType);
                updateTotalAmount();
                itemCountLabel.setText("수량: " + getCount(itemType));
            }
        });
    }

    private void createSideItem(String label, int x, int y, double price, String itemType) {
        createMenuItem(label, x, y, price, itemType);
    }

    private void createDrinkItem(String label, int x, int y, double price, String itemType) {
        createMenuItem(label, x, y, price, itemType);
    }

    private void incrementCount(String itemType) {
        switch (itemType) {
            case "udon": udonCount++; break;
            case "bibimudon": bibimudonCount++; break;
            case "noodles": noodlesCount++; break;
            case "bibimnoodles": bibimnoodlesCount++; break;
            case "udonSari": udonSariCount++; break;
            case "noodlesSari": noodlesSariCount++; break;
            case "rice": riceCount++; break;
            case "cola": colaCount++; break;
            case "cider": ciderCount++; break;
            case "sparklingWater": sparklingWaterCount++; break;
            case "bottledWater": bottledWaterCount++; break;
        }
    }

    private void decrementCount(String itemType) {
        switch (itemType) {
            case "udon": if (udonCount > 0) udonCount--; break;
            case "bibimudon": if (bibimudonCount > 0) bibimudonCount--; break;
            case "noodles": if (noodlesCount > 0) noodlesCount--; break;
            case "bibimnoodles": if (bibimnoodlesCount > 0) bibimnoodlesCount--; break;
            case "udonSari": if (udonSariCount > 0) udonSariCount--; break;
            case "noodlesSari": if (noodlesSariCount > 0) noodlesSariCount--; break;
            case "rice": if (riceCount > 0) riceCount--; break;
            case "cola": if (colaCount > 0) colaCount--; break;
            case "cider": if (ciderCount > 0) ciderCount--; break;
            case "sparklingWater": if (sparklingWaterCount > 0) sparklingWaterCount--; break;
            case "bottledWater": if (bottledWaterCount > 0) bottledWaterCount--; break;
        }
    }

    private int getCount(String itemType) {
        switch (itemType) {
            case "udon": return udonCount;
            case "bibimudon": return bibimudonCount;
            case "noodles": return noodlesCount;
            case "bibimnoodles": return bibimnoodlesCount;
            case "udonSari": return udonSariCount;
            case "noodlesSari": return noodlesSariCount;
            case "rice": return riceCount;
            case "cola": return colaCount;
            case "cider": return ciderCount;
            case "sparklingWater": return sparklingWaterCount;
            case "bottledWater": return bottledWaterCount;
            default: return 0;
        }
    }

    private void updateTotalAmount() {
        totalAmount = udonCount * UDON_PRICE + bibimudonCount * BIBIMUDON_PRICE +
                      noodlesCount * NOODLES_PRICE + bibimnoodlesCount * BIBIMNOODLES_PRICE +
                      udonSariCount * UDON_SARI_PRICE + noodlesSariCount * NOODLES_SARI_PRICE +
                      riceCount * RICE_PRICE + colaCount * COLA_PRICE + ciderCount * CIDER_PRICE +
                      sparklingWaterCount * SPARKLING_WATER_PRICE + bottledWaterCount * BOTTLED_WATER_PRICE;
        updateFinalAmount();
    }

    private void updateFinalAmount() {
    	  finalAmount = totalAmount - discountAmount;
          finalAmount = Math.max(finalAmount, 0); // 결제 금액이 0보다 작지 않도록
          lblFinalAmount.setText("최종지불액: " + finalAmount);
          lblDiscountAmount.setText("할인금액: " + discountAmount);
    }
    
    // 일일 매출 로그 추가 메서드
    private void logDailySales(String paymentMethod, double amount) {
        SimpleDateFormat dateFormat = new SimpleDateFormat("yyyy-MM-dd");
        SimpleDateFormat timeFormat = new SimpleDateFormat("HH:mm:ss");
        Date now = new Date();
        String todayFileName = DAILY_SALES_DIRECTORY + dateFormat.format(now) + "_sales.csv";

        try (BufferedWriter writer = new BufferedWriter(new FileWriter(todayFileName, true))) {
            // 시간, 지불방식, 금액
            String salesEntry = String.format("%s,%s,%.2f\n", 
                timeFormat.format(now), paymentMethod, amount);
            writer.write(salesEntry);
        } catch (IOException e) {
            JOptionPane.showMessageDialog(frame, "매출 로깅 중 오류 발생: " + e.getMessage(), 
                "오류", JOptionPane.ERROR_MESSAGE);
        }

        // 월별 매출 로깅
        updateMonthlySales(amount);
    }
    
    // 결제 버튼 클릭 시 호출되는 메서드
    private void handlePayment(String paymentMethod) {
        // 현재 시간을 가져와서 시간 정보로 사용
        SimpleDateFormat sdf = new SimpleDateFormat("yyyy-MM-dd HH:mm:ss");
        String currentTime = sdf.format(new Date());

        // 파일 경로 설정
        String dailySalesFilePath = "sales_logs/daily/" + new SimpleDateFormat("yyyy-MM-dd").format(new Date()) + "_sales.csv";
        
        // 결제 금액을 finalAmount로 설정 (할인 적용 후 금액)
        double amountToPay = finalAmount;

        // 매출 로그 파일에 기록
        logDailySales(dailySalesFilePath, currentTime, paymentMethod, amountToPay);

        // 결제 후 UI 업데이트 등 필요한 추가 작업
        // 예: JOptionPane.showMessageDialog(null, "결제가 완료되었습니다.");
    }
    
    
    // 매출 기록을 CSV 파일에 저장하는 메서드
    private void logDailySales(String filePath, String time, String paymentMethod, double amount) {
        try {
            File file = new File(filePath);
            boolean fileExists = file.exists();

            // 파일이 없으면 헤더를 추가
            if (!fileExists) {
                file.getParentFile().mkdirs();  // 디렉토리가 없으면 생성
                file.createNewFile();  // 파일 생성
            }

            // FileWriter와 BufferedWriter를 사용하여 CSV 형식으로 기록
            try (BufferedWriter writer = new BufferedWriter(new FileWriter(file, true))) {
                if (!fileExists) {
                    writer.write("시간,지불방식,금액\n");  // 헤더 추가
                }
                writer.write(time + "," + paymentMethod + "," + amount + "\n");
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    
    
 // 월별 매출 로깅 메서드
    private void updateMonthlySales(double amount) {
        SimpleDateFormat monthFormat = new SimpleDateFormat("yyyy-MM");
        Date now = new Date();
        String currentMonth = monthFormat.format(now);

        try {
            File monthlyFile = new File(MONTHLY_SALES_FILE);
            Map<String, Double> monthlySalesMap = new HashMap<>();

            // 기존 월별 매출 읽기
            if (monthlyFile.exists()) {
                try (BufferedReader reader = new BufferedReader(new FileReader(monthlyFile))) {
                    String line;
                    while ((line = reader.readLine()) != null) {
                        String[] parts = line.split(",");
                        if (parts.length == 2) {
                            monthlySalesMap.put(parts[0], Double.parseDouble(parts[1]));
                        }
                    }
                }
            }
            
            // 현재 월의 매출 업데이트
            double currentMonthSales = monthlySalesMap.getOrDefault(currentMonth, 0.0) + amount;
            monthlySalesMap.put(currentMonth, currentMonthSales);

            // 월별 매출 파일에 쓰기
            try (BufferedWriter writer = new BufferedWriter(new FileWriter(MONTHLY_SALES_FILE))) {
                for (Map.Entry<String, Double> entry : monthlySalesMap.entrySet()) {
                    writer.write(String.format("%s,%.2f\n", entry.getKey(), entry.getValue()));
                }
            }
        } catch (IOException e) {
            JOptionPane.showMessageDialog(frame, "월별 매출 로깅 중 오류 발생: " + e.getMessage(), 
                "오류", JOptionPane.ERROR_MESSAGE);
        }
    }

 // 일일 매출 읽기 메서드
    private double readDailySales(Date date) {
        SimpleDateFormat dateFormat = new SimpleDateFormat("yyyy-MM-dd");
        String fileName = DAILY_SALES_DIRECTORY + dateFormat.format(date) + "_sales.csv";
        double totalSales = 0.0;

        File salesFile = new File(fileName);
        if (!salesFile.exists()) {
            return totalSales;
        }

        try (BufferedReader reader = new BufferedReader(new FileReader(salesFile))) {
            String line;
            while ((line = reader.readLine()) != null) {
                String[] parts = line.split(",");
                if (parts.length == 3) {
                    totalSales += Double.parseDouble(parts[2]);
                }
            }
        } catch (IOException e) {
            JOptionPane.showMessageDialog(frame, "일일 매출 읽기 중 오류 발생: " + e.getMessage(), 
                "오류", JOptionPane.ERROR_MESSAGE);
        }

        return totalSales;
    }
    
    

 // 월별 매출 읽기 메서드
    private double readMonthlySales(String yearMonth) {
        try {
            File monthlyFile = new File(MONTHLY_SALES_FILE);
            if (!monthlyFile.exists()) {
                return 0.0;
            }

            try (BufferedReader reader = new BufferedReader(new FileReader(monthlyFile))) {
                String line;
                while ((line = reader.readLine()) != null) {
                    String[] parts = line.split(",");
                    if (parts.length == 2 && parts[0].equals(yearMonth)) {
                        return Double.parseDouble(parts[1]);
                    }
                }
            }
        } catch (IOException e) {
            JOptionPane.showMessageDialog(frame, "월별 매출 읽기 중 오류 발생: " + e.getMessage(), 
                "오류", JOptionPane.ERROR_MESSAGE);
        }
        return 0.0;
    }
    
 // 월 매출 통계 창을 보여주는 메소드
    private void showMonthlySalesStats() {
        JFrame salesStatsFrame = new JFrame("월 매출 통계");
        salesStatsFrame.setSize(400, 300);
        salesStatsFrame.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
        salesStatsFrame.setLocationRelativeTo(frame);

        salesStatsFrame.setLayout(new BoxLayout(salesStatsFrame.getContentPane(), BoxLayout.Y_AXIS));

        JTextArea salesTextArea = new JTextArea(10, 30);
        salesTextArea.setEditable(false);
        JScrollPane scrollPane = new JScrollPane(salesTextArea);
        salesStatsFrame.add(scrollPane);

        // 월 매출 버튼 클릭 시 호출되는 메서드
        String monthSalesDirectory = "sales_logs/daily/";
        String currentMonth = new SimpleDateFormat("yyyy-MM").format(new Date()); // 현재 년-월

        double totalMonthlySales = 0.0; // 월 매출 합계를 저장할 변수
        int totalDays = 0; // 월 매출을 계산한 일 수

        // 해당 월의 매출 파일을 읽기 (1일부터 31일까지 반복)
        for (int day = 1; day <= 31; day++) {
            String dayString = String.format("%02d", day); // 두 자리로 맞추기 (01, 02, ..., 31)
            String dailySalesFilePath = monthSalesDirectory + currentMonth + "-" + dayString + "_sales.csv";

            // 해당 파일이 존재하면 읽어서 매출을 합산
            File file = new File(dailySalesFilePath);
            if (file.exists()) {
                try (BufferedReader reader = new BufferedReader(new FileReader(dailySalesFilePath))) {
                    String line;
                    // 첫 번째 줄은 헤더이므로 건너뛰기
                    reader.readLine();

                    // 파일에서 데이터를 읽고 출력
                    while ((line = reader.readLine()) != null) {
                        String[] data = line.split(",");
                        String time = data[0];
                        String paymentMethod = data[1];
                        double amount = Double.parseDouble(data[2]); // 금액을 double로 변환

                        // 텍스트 영역에 출력
                        //salesTextArea.append("날짜: " + currentMonth + "-" + dayString + ", 시간: " + time + ", 지불방식: " + paymentMethod + ", 금액: " + amount + "원\n");

                        // 월 매출 합산
                        totalMonthlySales += amount;
                    }
                    totalDays++; // 유효한 매일 매출 파일을 찾으면 일 수 증가
                } catch (IOException e) {
                    System.out.println("매출 파일을 읽는 중 오류가 발생했습니다.");
                    e.printStackTrace();
                }
            }
        }

        // 월 매출 합계 출력
        salesTextArea.append("\n" + currentMonth + " 월 총 매출: " + String.format("%.2f", totalMonthlySales) + "원");

        // 매출 통계 창을 보이게 함
        salesStatsFrame.setVisible(true);
    }
    
 // 매출 통계 창을 보여주는 메소드
    private void showSalesStats() {
        JFrame salesStatsFrame = new JFrame("매출 통계");
        salesStatsFrame.setSize(400, 300);
        salesStatsFrame.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
        salesStatsFrame.setLocationRelativeTo(frame);

        salesStatsFrame.setLayout(new BoxLayout(salesStatsFrame.getContentPane(), BoxLayout.Y_AXIS));

        JTextArea salesTextArea = new JTextArea(10, 30);
        salesTextArea.setEditable(false);
        JScrollPane scrollPane = new JScrollPane(salesTextArea);
        salesStatsFrame.add(scrollPane);

        // 매출 통계 버튼 클릭 시 호출되는 메서드
        String dailySalesFilePath = "sales_logs/daily/" + new SimpleDateFormat("yyyy-MM-dd").format(new Date()) + "_sales.csv";
        
        // 월 매출 버튼 클릭 시 호출되는 메서드
        String monthSalesDirectory = "sales_logs/daily/";
        String currentMonth = new SimpleDateFormat("yyyy-MM").format(new Date()); // 현재 년-월

        
     

        // 매출 통계 창을 보이게 함
        salesStatsFrame.setVisible(true);
    

       
        
        double totalSales = 0.0; // 일일 매출 합계를 저장할 변수

        try (BufferedReader reader = new BufferedReader(new FileReader(dailySalesFilePath))) {
            String line;
            // 첫 번째 줄은 헤더이므로 건너뛰기
            reader.readLine();

            // 파일에서 데이터를 읽고 출력
            while ((line = reader.readLine()) != null) {
                String[] data = line.split(",");
                String time = data[0];
                String paymentMethod = data[1];
                double amount = Double.parseDouble(data[2]); // 금액을 double로 변환

                // 텍스트 영역에 출력
                salesTextArea.append("시간: " + time + ", 지불방식: " + paymentMethod + ", 금액: " + amount + "원\n");

                // 매출 합산
                totalSales += amount;
            }
            
            // 일일 매출 합계 출력
            salesTextArea.append("\n일일 총 매출: " + String.format("%.2f", totalSales) + "원");

        } catch (IOException e) {
            System.out.println("매출 파일을 읽는 중 오류가 발생했습니다.");
            e.printStackTrace();
        }

        // 매출 통계 창을 보이게 함
        salesStatsFrame.setVisible(true);
    
        
        
        
        
        
        

    // 일 매출 버튼
    JButton btnDailySales = new JButton("일 매출 보기");
    btnDailySales.addActionListener(new ActionListener() {
        public void actionPerformed(ActionEvent e) {
            // 오늘 일일 매출 읽기
            double todaySales = readDailySales(new Date());
            salesTextArea.setText("일 매출: " + String.format("%.2f", todaySales) + "원\n");

            // 매출 통계 창 호출
            showSalesStats();
        }
    });
    salesStatsFrame.add(btnDailySales);

        

        // 월 매출 버튼
        JButton btnMonthlySales = new JButton("월 매출 보기");
        btnMonthlySales.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                // 현재 월 매출 읽기
            	showMonthlySalesStats();
            }
        });
        salesStatsFrame.add(btnMonthlySales);

        salesStatsFrame.setVisible(true);
    }


    private void printReceipt(String currentTime) {
        // 전표 출력
        StringBuilder orderDetails = new StringBuilder();

        if (udonCount > 0) orderDetails.append("우동  " + udonCount + "개\n");
        if (bibimudonCount > 0) orderDetails.append("비빔우동  " + bibimudonCount + "개\n");
        if (noodlesCount > 0) orderDetails.append("국수  " + noodlesCount + "개\n");
        if (bibimnoodlesCount > 0) orderDetails.append("비빔국수  " + bibimnoodlesCount + "개\n");
        if (udonSariCount > 0) orderDetails.append("우동사리  " + udonSariCount + "개\n");
        if (noodlesSariCount > 0) orderDetails.append("국수사리  " + noodlesSariCount + "개\n");
        if (riceCount > 0) orderDetails.append("밥  " + riceCount + "개\n");
        if (colaCount > 0) orderDetails.append("콜라  " + colaCount + "개\n");
        if (ciderCount > 0) orderDetails.append("사이다  " + ciderCount + "개\n");
        if (sparklingWaterCount > 0) orderDetails.append("탄산수  " + sparklingWaterCount + "개\n");
        if (bottledWaterCount > 0) orderDetails.append("생수  " + bottledWaterCount + "개\n");

        String receipt = String.format(
            "결제 방법: %s\n" +
            "결제 시간: %s\n" +
            "주문 내용:\n%s\n" +
            "총액: %.2f원\n" +
            "할인금액: %.2f원\n" +
            "최종금액: %.2f원\n",
            paymentMethod, currentTime, orderDetails.toString(), totalAmount, discountAmount, finalAmount
        );

        JOptionPane.showMessageDialog(frame, receipt, "전표 출력", JOptionPane.INFORMATION_MESSAGE);
      
    }
}

