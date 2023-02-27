package com.cho.Spring.Framework.Bean;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.annotation.*;
import org.springframework.stereotype.Component;
import org.springframework.stereotype.Controller;
import org.springframework.stereotype.Service;

import javax.annotation.PostConstruct;
import javax.annotation.PreDestroy;

@Configuration
    @ComponentScan("com.cho.Spring.Framework.coupling.GamingConsole")
public class App02HelloSpring {


    public static void main(String[] args) {
        var context =
                new AnnotationConfigApplicationContext(HelloWorldConfiguration.class);
        System.out.println(context.getBean("name"));
            }
    }



