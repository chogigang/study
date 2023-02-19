package com.cho.Spring.Framework.Bean;


import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.Configuration;

@Configuration
public class HelloWorldConfiguration {

    @Bean
    public String name() {
        return "Rana";
    }


    @Bean
    public int age() {
        return 15;
    }


}
/*빈은  @Configuration 랑 같이 쓴다  불필요한 빈 생성을 막아줍니다.

  @Component  자동으로 스프링 컨테이너에 빈을 등록 @SpringComponent Scan 기능이 @Component 어노테이션이 있는 클래스를 자동으로 찾아서 빈으로 등록됀다

 대부분 @Component 를 사용 하지만 개발자가 직접 제어가 불가능한 라이브러리를 빈으로 등록할 때 불가피하게 사용합니다.



 */


