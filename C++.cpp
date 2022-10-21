#include <iostream>	// 입출력 스트림

using namespace std;

// 가상함수
/*
class Animal
{
private:	// 속성
	float weight;


public:
	// 가상 함수
	// 상속하는 클래스 내에 같은 함수로 재정의될 수 있는 함수

	// 가상 함수 규칙
	// -> public으로 선언
	// -> static(정적) 선언 X
	// -> 실행시간에 다형성 형성 위해
	//    기본 클래스의 포인터, 참조 통해 접근
	// -> 상위 클래스, 하위 클래스 함수 형태 동일

	virtual void Sound()	// 가상 함수 선언
	{
		cout << "동물의 소리" << endl;
	}

	void Attack()
	{
		cout << "공격" << endl;
	}
};

class Cat : public Animal
{
public:
	// 상위 클래스에 있는 Sound() 사용하기 위해서
	// 같은 이름으로 정의
	void Sound()
	{
		cout << "냐옹~" << endl;
	}

	void Attack()
	{
		cout << "할퀴기" << endl;
	}
};

class Dog : public Animal
{
public:
	void Sound()
	{
		cout << "멍멍!" << endl;
	}

	void Attack()
	{
		cout << "물기" << endl;
	}
};
*/

// 오버로딩
// 같은 이름의 함수를 여러 개 만들 수 있는 기능

// 매개변수의 개수와 타입(자료형)으로 설정
void Calculator(int x)
{
	cout << "int 계산기" << endl;
	cout << x << endl;
}

// 반환형에 영향 X
//int Calculator(int x)
//{
//	return x;
//}

void Calculator(float x, float y)
{
	cout << "float 계산기" << endl;
	cout << x + y << endl;
}

int main()
{
	// 다형성
	/*
	// 객체가 여러 형태를 받아들일 수 있는 성질
	// 상황에 따라 다른 의미를 부여하여 사용할 수 있는 속성

	// 바인딩
	// 프로그램 소스에 사용된 이름, 식별자, 함수들에 대해
	// 값, 속성 확정하는 과정
	
	// 정적 바인딩
	// 컴파일 시점에 이루어짐
	// 컴파일 끝나면 결정된 속성 변경 X

	// 동적 바인딩
	// 실행시간에 이루어짐
	// 실행시간에 필요한 객체의 함수를 호출할 수 있으며, 유연성 가짐

	// 일반 함수는 정적 바인딩으로 컴파일 시점에 호출할 함수 결정

	// 실행 시간에 이루어져야 함

	// 가상 함수는 실행시간에 원하는 함수 호출
	// 가상 함수는 컴파일 시점에 함수 결정 X -> 호출 시점
	Animal* animal1 = new Animal;	// new Cat <- 실행시간에 컴파일러가 인식
	Animal* animal2 = new Dog;	// new Dog <- 실행시간에 컴파일러가 인식

	animal1->Sound();
	animal1->Attack();

	animal1 = animal2;

	animal1->Sound();
	animal1->Attack();

	animal2->Sound();
	*/

	// 함수의 오버로딩
	Calculator(10, 20);

	Calculator(10.5f, 16.7f);

	return 0;
}