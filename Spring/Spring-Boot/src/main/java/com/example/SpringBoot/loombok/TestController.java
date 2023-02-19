package com.example.SpringBoot.loombok;

import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController
public class TestController {

    @GetMapping(value = "/test")
    public UserDTO test(){

        UserDTO useDTO = new UserDTO();
        useDTO.setName("cho");
        useDTO.setAge(15);
        return useDTO;
    }

}
