package com.cho.Spring.Framework.coupling;


import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Component;

@Component//우리가 이 컴포넌트 이 이노테이션을 관리하라고 하는것이다. 즉 스프링 프레임 워크에게 마리오 게임을 관리하라 라는것
//나 대신 인스턴스를 생성하라 명령
public class GameRunner {

    @Autowired//마리오 게임이 컴포넌트라고 했어 그러니까 가서 찾아 그리고 객체 목록에서 찾으면 오토 와이어해 라고 하는것

    private GamingConsole game;
    public GameRunner(GamingConsole game) {
        System.out.println("Using Constructor");

        this.game=game;
    }
    public void runGame() {
        game.up();
        game.down();
        game.left();
        game.right();
    }
}


//느슨하게 연관