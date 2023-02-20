package com.example.SpringJPA.entity;

import javax.persistence.Entity;
import javax.persistence.Id;
import javax.persistence.Transient;


@Entity// 꼭 자바x persistence 를 받아야한다.
public class Member {
    @Transient//db에 pk를 매핑하는 어노테이션
    private Long id;
    private String name;



    public Long getId() {
        return id;
    }

    public void setId(Long id) {
        this.id = id;
    }

    public void setName(String name) {
        this.name = name;
    }
}


//겟터 셋터 만들고 이엔티티 만들고 @ID로 db에 pk를 매핑합시다.
//