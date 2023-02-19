package com.example.SpringBoot.loombok;

import lombok.Data;
import lombok.Getter;
import lombok.Setter;
import lombok.ToString;

@Getter
@Setter
@ToString
@Data
public class UserDTO {

        private String name;
        private int age;

}
