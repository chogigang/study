//static
void main() {
	Employee seugi = new Employee('슬기');
  Employee chorong = Employee('초롱');
  Employee jenny =Employee('제니');  
    seugi.printNameAndBuilding();
    chorong.printNameAndBuilding();
    seugi.name ="코드 팩토리"; //인스턴스에 귀속
    seugi.printNameAndBuilding(); //같은 클래스에서도 인스턴스를 만들었는대 함수를 실행하거나 값을 가져오면  그값은 각각의 변수마다 다르다.
                                  // 초롱의 값은 안바뀌는 이유가 바로 그것이다.
    Employee.building= '오투 타워'; //클래스에 다이렉트로 귀속 시킬수있다.
     seugi.printNameAndBuilding(); //클래스 자체에 귀속이 다 되어 있기때문에 자동으로 타워 값도 같이 프린터 됨
    chorong.printNameAndBuilding();
    jenny.printNameAndBuilding();

    Employee.printBuilding();
}



class Employee{
  //static 은 intance에 귀속되지 않고 class에 귀속된다.
  //알바생이 일하고 있는 건물
  static String? building;
 //알바생 이름
  // final  String name;
      String name;
  
  Employee(
    this.name,
  );
  
  void printNameAndBuilding(){
    //static을 사용하였기 때문에, building에서는 this를 사용하지 않는다.(사용자체 불가)
    print('제 이름은 ${this.name}이고, ${building} 건물에서 근무 중 입니다.');
  }
  static void printBuilding(){
  print('저는$building 건물에서 근무중입니다.');
  }
}
