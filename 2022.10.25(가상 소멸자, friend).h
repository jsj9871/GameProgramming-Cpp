#include <iostream>	// 입출력 스트림
#include <conio.h>
#include <time.h>

using namespace std;

// 가상 소멸자
/*
// 가상으로 선언한 소멸자, 가상 생성자 존재 X

class A
{
public:
	A()
	{
		cout << "A 클래스 생성" << endl;
	}

	virtual ~A()
	{
		cout << "A 클래스 소멸" << endl;
	}
};

class B : public A
{
public:
	B()
	{
		cout << "B 클래스 생성" << endl;
	}

	virtual ~B()
	{
		cout << "B 클래스 소멸" << endl;
	}
};
*/

// friend
/*
// 클래스의 멤버 함수 X, 클래스에 선언하면
// 클래스의 멤버 함수처럼 private 멤버에 접근 가능

class PeopleA
{
private:
	int age;

	friend void Information(PeopleA A)	// 전역 함수로 선언
	{
		cout << "PeopleA 클래스 정보" << endl;
	}

	// 친구로 선언할 클래스 이름 선언
	// public, private, protected 다 사용 가능
	friend class PeopleB;

public:
	PeopleA(int age)
	{
		this->age = age;
	}
};

class PeopleB
{
public:
	void FreindInformation(PeopleA People)
	{
		cout << People.age << endl;
	}
};
*/

int main()
{
	// 가상 소멸자 호출되면
	/*
	// 상속 구조 맨 아래에 있는 하위 클래스의 소멸자 대신 호출
	// -> 상위 클래스 소멸자 순서대로 호출
	A* Aptr = new B();

	delete Aptr;
	*/

	// friend
	/*
	PeopleA A(10);
	Information(A);
	PeopleB B;
	B.FreindInformation(A);
	*/

	// 곱셈
	/*
	int Num1;
	int Num2;

	cin >> Num1 >> Num2;

	cout << (Num2 % 10) * Num1 << endl;
	cout << (Num2 / 10) % 10 * Num1 << endl;
	cout << (Num2 / 100) * Num1 << endl;
	cout << Num1 * Num2 << endl;
	*/

	// 중복되지 않는 랜덤 값
	// 1. 배열 생성
	// 2. 배열에 순차적으로 값 저장
	// [] [] [] [] []

	int array[10];
	srand(time(NULL));

	// 배열 인덱스 == 배열 인덱스 + 1
	for (int i = 0; i < 10; i++)
	{
		array[i] = rand() % 10 + 1;

		if (array[i] == array[i + 1])
		{
			i--;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		cout << array[i] << endl;
	}

	return 0;
}