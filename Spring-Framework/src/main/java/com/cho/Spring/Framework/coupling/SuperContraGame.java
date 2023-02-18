package com.cho.Spring.Framework.coupling;

public class SuperContraGame implements GamingConsole {

    public  void up() {
        System.out.println("up");
    }
    public  void down() {
        System.out.println("down");
    }
    public  void left() {
        System.out.println("left");
    }
    public  void right() {
        System.out.println("right");
    }
}

//느슨하게 연관