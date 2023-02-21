    package com.example.SpringJPA;

    import com.example.SpringJPA.entity.Member;
    import com.example.SpringJPA.entity.MemberType;

    import javax.persistence.EntityManager;
    import javax.persistence.EntityManagerFactory;
    import javax.persistence.EntityTransaction;
    import javax.persistence.Persistence;

    public class Main {

        public static void  main(String args[]) {
            EntityManagerFactory emf = //엔티티 매니저 팩토리를 변수로 담았음
                    Persistence.createEntityManagerFactory("SpringJPA");//펄시스턴스 xml name 에 있는 이름으로 연결된 설정정보들을 다 가지고오는것

            EntityManager em = emf.createEntityManager();//고객의 요청이 들어올때마다 에티티 메니저를 생성을해서 쓰면됀다.
            EntityTransaction tx = em.getTransaction();//트랜젝션을 먼저 얻어야한다 jpa의 모든 활동들은 트랜젝션 안에서 이루어 져야한다
            tx.begin();//트랜잭션이 실제 시작이됩니다. 데이터베이스에서 접근을 해서 컬랙션을 가져온다음 실제 트랜잭션을 시작하고


            try {
                Member member = new Member();
                member.setId(100L);
                member.setName("안녕하세요");
                member.setMemberType(MemberType.USER);
                //맴버 객체를 저장
                //실제로 .set은 잘 안쓰지만  헬로 난이도라서 여기서 그냥 일단 쓴다.

                em.persist(member);//JPA에서 제일 중요한거 persist 가 영구저장하다 라는 표현이다
                tx.commit();
                em.close(); //엔티티 메니저는 다쓰면 꼭 닫아줘야한다. 안닫아주면 문제가 생길수있다 데이터베이스 리소스 접근이 없어지거나
            } catch (Exception e) {
               tx.rollback();
            } finally {
                em.close();
            }
            emf.close();
        }
    }//이것이 정석 로직

    /* 엔티티 메니저 팩토리는 하나만 생성해서 애플리케이션 전체에 공우
        엔티티 매니저는 쓰레드간에 공유하면 안된다(사용하고 버려야한다.)
        JPA의 모든 데이터 변경은 트랜직션 안에서 실행
    * */