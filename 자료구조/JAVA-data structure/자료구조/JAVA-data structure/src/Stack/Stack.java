package Stack;

import java.util.EmptyStackException;

public class Stack {
    public static void main(String[] args) {
//        if (args.length != 1) {
//            System.out.println("Usage:java Ex11_3 \"EXPRESSION\"");
//            System.out.println("Example:java Ex11_3 \"((2+3)*1)+3\"");
//            System.exit(0);
//        }

        java.util.Stack st = new java.util.Stack();
        String expression = "((3+5)*8-2)";  //args[0];
        //여는 괄호는 스택에 넣고 닫는 괄호가 나오면 스텍에서 하나씩 꺼낸다  수식을 처음부터 끝가지 다 읽었을때  스텍이 비어있으면  괄호가 맞는거다

        System.out.println("expression:" + expression);

        try { //'('  여는 괄호일때는 스텍을 넣고   ')' 닫는 괄호일때는 스텍을 꺼내는 작업을 for문으로 반복
            for (int i = 0; i < expression.length(); i++) {
                char ch = expression.charAt(i);

                if (ch == '(') {
                    st.push(ch + "");
                } else if (ch == ')') {
                    st.pop();
                }
            }

            if (st.isEmpty()) {//마지막으로 스택이 비어있으면
                System.out.println("괄호가 일치합니다.");//트루
            } else {
                System.out.println("괄호가 일치하지 않습니다.");//  ')' 닫는 괄호가 더많을때 
            }
        } catch (EmptyStackException e) {
            System.out.println("괄호가 일치하지 않습니다."); //예외문 ')' 닫는 괄호가 '('여는 괄호보다 부족할때 예외 발생
        } // try
    }
}
