#include <iostream>	// 입출력 스트림

using namespace std;

// 멤버 이니셜라이저
// 생성자 역할 대신 초기화하는 목록
class Person
{
private:
	int x;
	int y;

public:
	int x = 10;

	void Count()
	{
		cout << "Count" << endl;
	}

	// 초기화 대상 명확히 인식
	// 선언과 동시에 초기화 -> 바이너리 코드 생성 -> 속도 빠름
	/*
	Person(int _x, int _y) : x(_x), y(_y)
	{
		cout << "x의 값 : " << x << endl;
		cout << "y의 값 : " << y << endl;
	}
	*/
};

class Child : public Person
{
public :
	void ChildInfo()
	{
		cout << "Child 클래스" << endl;
		cout << b << endl;
	}

	float b = 3.65;
};

class Child2 : public Person
{
public:
	void ChildInfo()
	{
		cout << "Child 클래스" << endl;
		cout << c << endl;
	}

	int c = 5;
};

// static_cast
// 기본 자료형의 형변환, 상위 클래스에서 하위 클래스로 포인터 변환 연산에 사용하는 연산자
// 컴파일 시점에 형변환

// dynamic_cast
// 캐스팅 성공 시 주소 값 반환, 실패 시 nullptr 반환

// 주의점
// 1. 객체 포인터 간의 형변환만 가능
// 2. virtual 키워드가 하나라도 존재하는 상속관계에서 가능

class A
{
public:
	virtual void Function()
	{
		cout << "A 클래스" << endl;
	}
};

class B : public A
{
public:
	void Function()
	{
		cout << "B 클래스" << endl;
	}
};

int main()
{
	// 멤버 이니셜 라이저
	//Person person1(10, 20);

	// static_cast
	/*
	Person* ptr1 = new Child();
	
	// 잘못된 상속관계 형변환 오류 못잡음
	Child2* cptr1 = static_cast<Child2*>(ptr1);
	cptr1->ChildInfo();

	//int value = 10;

	// static_cast가 없으면 기본 자료형이 클래스로 형변환
	// Child * c = (Child*)value;
	
	// 논리적으로 변환 가능한 타입 변환
	// static_cast<바꾸려는 타입>(대상);
	// 컴파일 시점에 형변환에 대한 타입 오류 표시

	// int형 변수 -> double 형변환
	// 큰 문제 X -> error 표시 X
	//double a = static_cast<int>(value);
	*/

	// dynamic_cast
	A* aptr = new A();
	A* bptr = new B();
	B* bptr2 = new B();
	B* bptr3 = new B();

	// 컴파일 오류 : 타입 변환 불가
	// bbtr3 = aptr;

	// 컴파일 성공 : 런타임에 타입변환에 실패하면 NULL 반환
	bptr3 = dynamic_cast<B*>(aptr);
	return 0;
}