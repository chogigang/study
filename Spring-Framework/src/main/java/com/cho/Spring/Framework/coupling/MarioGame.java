package com.cho.Spring.Framework.coupling;

import org.springframework.stereotype.Component;

@Component//우리가 이 컴포넌트 이 이노테이션을 관리하라고 하는것이다. 즉 스프링 프레임 워크에게 마리오 게임을 관리하라 라는것
//컨트롤+쉬프트 누르면 자동적으로 임풋을 만들어줌 이기능을 organized input 기능이다.
//스프링 프레임워크는 그러면 "어? 컴포넌트가 보이네? 여기다가 마리오 게임 인스턴스 만들게요" 할것이다.
public class MarioGame implements GamingConsole {

    @Override
    public  void up() {
        System.out.println("jump");
    }
    @Override
    public  void down() {
        System.out.println("go into a hole");
    }
    @Override
    public  void left() {
        System.out.println("stop");
    }
    @Override
    public  void right() {
        System.out.println("go faster");
    }
}
/*강하게 + 느슨하게 연관
*
* */