package com.cho.Spring.Framework.Bean;
import org.springframework.context.annotation.AnnotationConfigApplicationContext;
import org.springframework.stereotype.Component;
import org.springframework.stereotype.Controller;
import org.springframework.stereotype.Service;

import javax.annotation.PostConstruct;
import javax.annotation.PreDestroy;

public class App03HelloSpring {
    public static void main(String[] args) {
        var context =
                new AnnotationConfigApplicationContext(HelloWorldConfiguration.class);
        System.out.println(context.getBean("name"));
    }
}

    @Component
    class SomeClass{
        private com.cho.Spring.Framework.Bean.SomeDependency someDependency;

        public  SomeClass(com.cho.Spring.Framework.Bean.SomeDependency someDependency) {
            super();
            this.someDependency = someDependency;
            System.out.println("All dependency are ready!");
        }
        @PostConstruct//의존성 주입이 완료되어 초기호가 수행된 후 실행되어야 하는  메소드에서 사용
        public void initalize(){
            someDependency.getReady();
        }
        @PreDestroy// 인스턴스가 컨테이너에 의해 제거 되고  있다는 신호에대한 콜백 알림
        public void cleanup() {
            System.out.println("Cleanup");
        }

    }

    @Component
    class SomeDependency{
        public void getReady(){
            System.out.println("Some logic using SomeDependency");
        }
    }

