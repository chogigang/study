package Test;

import java.awt.EventQueue;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JButton;

public class Kiosk {

    private JFrame frame;

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

    // 버튼 변수들 추가
    private JButton btnUdonPlus, btnUdonMinus;
    private JButton btnBibimudonPlus, btnBibimudonMinus;
    private JButton btnNoodlesPlus, btnNoodlesMinus;
    private JButton btnBibimnoodlesPlus, btnBibimnoodlesMinus;
    private JButton btnUdonSariPlus, btnUdonSariMinus;
    private JButton btnNoodlesSariPlus, btnNoodlesSariMinus;
    private JButton btnRicePlus, btnRiceMinus;
    private JButton btnColaPlus, btnColaMinus;
    private JButton btnCiderPlus, btnCiderMinus;
    private JButton btnSparklingWaterPlus, btnSparklingWaterMinus;
    private JButton btnBottledWaterPlus, btnBottledWaterMinus;

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
                discountAmount += totalAmount * 0.30; // 30% 할인 (누적)
                updateFinalAmount();
            }
        });

        // 통신사 할인 버튼 클릭 시
        btnTelecomDiscount.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                discountAmount += totalAmount * 0.10; // 10% 할인 (누적)
                updateFinalAmount();
            }
        });

        // 매출 통계 버튼 (왼쪽 아래 배치)
        JButton btnSalesStats = new JButton("매출 통계");
        btnSalesStats.setBounds(20, 440, 97, 23);
        frame.getContentPane().add(btnSalesStats);

        // 결제 버튼 (오른쪽 아래 배치)
        JButton btnPayment = new JButton("결제");
        btnPayment.setBounds(600, 440, 97, 23);
        frame.getContentPane().add(btnPayment);

        // 결제 버튼 클릭 시
        btnPayment.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                printReceipt();
            }
        });
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
        btnMinus.setBounds(x + 60, y + 25, 51, 23); // 버튼 위치 수정
        frame.getContentPane().add(btnMinus);

        // 수량 레이블 위치를 더 넓게 설정
        JLabel lblCount = new JLabel("수량: 0");
        lblCount.setBounds(x + 120, y, 70, 15); // 수량 레이블 위치를 넓게 조정
        frame.getContentPane().add(lblCount);

        btnPlus.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                incrementItem(itemType, price, lblCount);
            }
        });

        btnMinus.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                decrementItem(itemType, price, lblCount);
            }
        });
    }

    private void createSideItem(String label, int x, int y, double price, String itemType) {
        createMenuItem(label, x, y, price, itemType);
    }

    private void createDrinkItem(String label, int x, int y, double price, String itemType) {
        createMenuItem(label, x, y, price, itemType);
    }

    private void incrementItem(String itemType, double price, JLabel lblCount) {
        switch (itemType) {
            case "udon":
                udonCount++;
                break;
            case "bibimudon":
                bibimudonCount++;
                break;
            case "noodles":
                noodlesCount++;
                break;
            case "bibimnoodles":
                bibimnoodlesCount++;
                break;
            case "udonSari":
                udonSariCount++;
                break;
            case "noodlesSari":
                noodlesSariCount++;
                break;
            case "rice":
                riceCount++;
                break;
            case "cola":
                colaCount++;
                break;
            case "cider":
                ciderCount++;
                break;
            case "sparklingWater":
                sparklingWaterCount++;
                break;
            case "bottledWater":
                bottledWaterCount++;
                break;
        }
        updateTotalAmount(price);
        lblCount.setText("수량: " + getItemCount(itemType));
    }

    private void decrementItem(String itemType, double price, JLabel lblCount) {
        switch (itemType) {
            case "udon":
                if (udonCount > 0) udonCount--;
                break;
            case "bibimudon":
                if (bibimudonCount > 0) bibimudonCount--;
                break;
            case "noodles":
                if (noodlesCount > 0) noodlesCount--;
                break;
            case "bibimnoodles":
                if (bibimnoodlesCount > 0) bibimnoodlesCount--;
                break;
            case "udonSari":
                if (udonSariCount > 0) udonSariCount--;
                break;
            case "noodlesSari":
                if (noodlesSariCount > 0) noodlesSariCount--;
                break;
            case "rice":
                if (riceCount > 0) riceCount--;
                break;
            case "cola":
                if (colaCount > 0) colaCount--;
                break;
            case "cider":
                if (ciderCount > 0) ciderCount--;
                break;
            case "sparklingWater":
                if (sparklingWaterCount > 0) sparklingWaterCount--;
                break;
            case "bottledWater":
                if (bottledWaterCount > 0) bottledWaterCount--;
                break;
        }
        updateTotalAmount(-price);
        lblCount.setText("수량: " + getItemCount(itemType));
    }

    private void updateTotalAmount(double priceChange) {
        totalAmount += priceChange;
        lblTotalAmount.setText("총액: " + totalAmount);
        updateFinalAmount();
    }

    private void updateFinalAmount() {
        finalAmount = totalAmount - discountAmount;
        lblFinalAmount.setText("최종 지불액: " + finalAmount);
    }

    private int getItemCount(String itemType) {
        switch (itemType) {
            case "udon":
                return udonCount;
            case "bibimudon":
                return bibimudonCount;
            case "noodles":
                return noodlesCount;
            case "bibimnoodles":
                return bibimnoodlesCount;
            case "udonSari":
                return udonSariCount;
            case "noodlesSari":
                return noodlesSariCount;
            case "rice":
                return riceCount;
            case "cola":
                return colaCount;
            case "cider":
                return ciderCount;
            case "sparklingWater":
                return sparklingWaterCount;
            case "bottledWater":
                return bottledWaterCount;
            default:
                return 0;
        }
    }

    private void printReceipt() {
        // 상호명, 사업자등록번호, 대표명, 연락처 등 임의 설정
        String storeName = "국수집";
        String businessNumber = "123-45-67890";
        String ownerName = "홍길동";
        String contact = "010-1234-5678";

        // 주문 내용 생성 (메뉴명과 수량을 합침)
        StringBuilder orderDetails = new StringBuilder();
        addOrderDetails(orderDetails, "우동", udonCount, UDON_PRICE);
        addOrderDetails(orderDetails, "비빔우동", bibimudonCount, BIBIMUDON_PRICE);
        addOrderDetails(orderDetails, "국수", noodlesCount, NOODLES_PRICE);
        addOrderDetails(orderDetails, "비빔국수", bibimnoodlesCount, BIBIMNOODLES_PRICE);
        addOrderDetails(orderDetails, "우동사리", udonSariCount, UDON_SARI_PRICE);
        addOrderDetails(orderDetails, "국수사리", noodlesSariCount, NOODLES_SARI_PRICE);
        addOrderDetails(orderDetails, "밥", riceCount, RICE_PRICE);
        addOrderDetails(orderDetails, "콜라", colaCount, COLA_PRICE);
        addOrderDetails(orderDetails, "사이다", ciderCount, CIDER_PRICE);
        addOrderDetails(orderDetails, "탄산수", sparklingWaterCount, SPARKLING_WATER_PRICE);
        addOrderDetails(orderDetails, "생수", bottledWaterCount, BOTTLED_WATER_PRICE);

        // 결제 시간
        String currentTime = new java.text.SimpleDateFormat("yyyy-MM-dd HH:mm:ss").format(new java.util.Date());

        // 전표 내용
        String receipt = String.format(
            "상호명: %s\n사업자등록번호: %s\n대표명: %s\n연락처: %s\n\n" +
            "주문 내용:\n%s\n" +
            "총액: %.2f\n할인금액: %.2f\n최종 지불액: %.2f\n" +
            "결제시간: %s",
            storeName, businessNumber, ownerName, contact,
            orderDetails.toString(), totalAmount, discountAmount, finalAmount, currentTime
        );

        // 전표 출력 (JOptionPane 사용)
        javax.swing.JOptionPane.showMessageDialog(frame, receipt, "전표 출력", javax.swing.JOptionPane.INFORMATION_MESSAGE);
    }

    private void addOrderDetails(StringBuilder orderDetails, String itemName, int count, double price) {
        if (count > 0) {
            orderDetails.append(itemName)
                        .append(" - 수량: ")
                        .append(count)
                        .append(" - 금액: ")
                        .append(count * price)
                        .append("원\n");
        }
    }
}
