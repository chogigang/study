package POLYTECH;


   class Book {
        String name;
       static int price;

        void info() {
            System.out.println(name + ":" + price);
        }
    }


   class Book2 {
        String name;
        int price;

        void info() {
            System.out.println(name + ":" + price);
        }
    }
    
   public class Program07 {  
    public static void main(String[] args) {
        Book b1 = new Book();
        Book b2 = new Book();
        Book2 b3 = new Book2();
        Book2 b4 = new Book2();
        
        b1.name ="java";
        b1.price=10000;
        b2.name="C";
        b2.price=15000;
        
        b1.info();  //스태틱이라 공
        b2.info();
        
        b3.name="python";
        b3.price=20000;
        b4.name="flutter";
        b4.price=30000;
        
        b3.info(); // 공유하지 않
        b4.info();
       
      
    }
}






//추상 캘르새    공통ㄷ이 되는 변수나 메서드의 이름과 형태만 기술해 놓았을 뿐 구체적인 내용이 없는 클래스 