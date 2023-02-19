package com.cho.Spring.Framework.Bean;

import org.springframework.context.annotation.AnnotationConfigApplicationContext;


public class App02HelloSpring {

    public static void main(String[] args) {
        var context =
                new AnnotationConfigApplicationContext(HelloWorldConfiguration.class);
        System.out.println(context.getBean("name"));
            }
    }





