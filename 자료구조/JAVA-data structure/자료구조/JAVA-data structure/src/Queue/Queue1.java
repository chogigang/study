package Queue;


import java.util.*;




public class Queue1 {
    static java.util.Queue q = new LinkedList(); //Queue 를 사용하려면 인터페이스를 구현한 구현체중 하나를 사용해야한다 그중 LinkedList 를 사용
    static final int MAX_SIZE = 5;	// Queue에 최대 5개까지만 저장되도록 한다. ,최근 5개의 명령어 이력을 보여준다.

    public static void main(String[] args) {
        System.out.println("help를 입력하면 도움말을 볼 수 있습니다.");

        while(true) {
            System.out.print(">>");
            try {
                // 화면으로부터 라인단위로 입력받는다.
                Scanner s = new Scanner(System.in);
                String input = s.nextLine().trim();

                if("".equals(input)) continue;

                if(input.equalsIgnoreCase("q")) {
                    System.exit(0);//q를 입력하면 프로그램 종료
                } else if(input.equalsIgnoreCase("help")) {//help를 입력하면 도움말을 출력 equalsIgnoreCase < 대소문자 구분안하기
                    System.out.println(" help - 도움말을 보여줍니다.");
                    System.out.println(" q 또는 Q - 프로그램을 종료합니다.");
                    System.out.println(" history - 최근에 입력한 명령어를 "
                            + MAX_SIZE +"개 보여줍니다.");
                } else if(input.equalsIgnoreCase("history")) {
                    int i=0;
                    // 입력받은 명령어를 저장하고,
                    save(input);

                    // LinkedList의 내용을 보여준다.
                    LinkedList tmp = (LinkedList)q;
                    ListIterator it = tmp.listIterator();

                    while(it.hasNext())
                        System.out.println(++i+"."+it.next());
                } else {
                    save(input);
                    System.out.println(input);
                } // if(input.equalsIgnoreCase("q")) {
            } catch(Exception e) {
                System.out.println("입력오류입니다.");
            }
        } // while(true)
    } //  main()
    public static void save(String input) {//Queue 에 입력한 명령어들을 저장
        // queue에 저장한다.
        if(!"".equals(input))//큐에 명령어를 저장 빈문자일때     //if(input!=null && !input.equals("")) 와 같음
            q.offer(input);//저장안한다.

        // queue의 최대크기를 넘으면 제일 처음 입력된 것을 삭제한다.
        if(q.size() > MAX_SIZE)  // size()는 Collection 인터페이스에 정의
            q.remove(); //삭제
    }
} // end of class