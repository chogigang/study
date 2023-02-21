package com.example.SpringJPA.entity;

import javax.persistence.*;
import javax.xml.crypto.Data;


@Entity// 꼭 자바x persistence 를 받아야한다.
    public class Member {

      @Id @GeneratedValue
    private Long id;
    @Column(name = "USERNAME")//
    private String name;
@Enumerated(EnumType.STRING)//현업에서는 무조건 스트링을 써야한다 기본값이 ORDINAL 이다 맴버 타입이 안꼬이게 막아주는 이유 이기 때문이다
    private MemberType memberType;
    @Temporal(TemporalType.TIMESTAMP)//날짜 시간 매핑
    private Data memberCreative;


    @Transient//db에 pk를 매핑하는 어노테이션
    private Long id2;

    @Column(name = "USERNAME")//
    private String name2;
    /*가장 많이 사용됨
                                name:필드와 매핑할 테이블 컬럼 이름

                                insertable,updatable:읽기 전용

                                nullable:null  허용여부 결정,DDL 생성시 사용

                                unique :유니크 제약 조건, DDL 생성시 사용

                                columnDefinition,length,precision,scale(DDL)*/

    @Temporal(TemporalType.TIMESTAMP)//날짜 시간 매핑

    @Lob/*컨탠트의 길이가 너무 길면 그럴경우 바이너리 파일로 바로 밀어넣어야하는대 이때 @Lob 을 사용합니다.
    LOB: String, char[],java.sql.CLOB 캐릭터 긴거

    BLOB: byte[],java,sql.BLOB 바이트

    @Lob
     private String lobString;

    @Lob
     private byte[] lobByte;
    */

    @Transient/*이 객체는 내가 db에 맵핑은 안하는대 객체는 좀 넣어 두고 싶을때 임시 플래그 같은거

                이필드는 매핑하지 않는다.

                   어플리케이션에서 DB에 저장하지 않는 필드*/


    @Column/*가장 많이 사용됨
            name:필드와 매핑할 테이블 컬럼 이름

            insertable,updatable:읽기 전용

            nullable:null  허용여부 결정,DDL 생성시 사용

            unique :유니크 제약 조건, DDL 생성시 사용

            columnDefinition,length,precision,scale(DDL)*/

    @Enumerated(EnumType.STRING)//현업에서는 무조건 스트링을 써야한다 기본값이 ORDINAL 이다 맴버 타입이 안꼬이게 막아주는 이유 이기 때문이다
            /*열거형 매핑

                EnumType.ORDINA:순서를 저장(기본값)

                EnumType.STRING:열거형 이름을 그대로 저장,가급적 이것을 사용


                @Enumerated(EnumType.STRING)

                private RoleType roleType;

            * */


    //식별자 매핑

    @Id//직접 매핑

    /*DENTITY:데이터베이스에 위임,MYSQL
      SEQUENCE:데이터베이스 시퀸스 오브젝트 사용, ORACLE
      @SequenceGenerator 필요

      TABLE 키 생성용 테이블 사용, 모든 DB에서 사용

      @TableGenerator 필요

      AUTO 방언에 따라 자동 지정, 기본값*/

    public Long getId() {
        return id;
    }

    public void setId(Long id) {
        this.id = id;
    }

    public void setName(String name) {
        this.name = name;
    }

    public MemberType getMemberType() {
        return memberType;
    }
    public  void setMemberType(MemberType memberType){
        this.memberType = memberType;
    }

}


//겟터 셋터 만들고 이엔티티 만들고 @ID로 db에 pk를 매핑합시다.
