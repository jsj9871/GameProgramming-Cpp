#include <iostream>	// 입출력 스트림

using namespace std;

// const 함수
/*
// const 함수 내부에서 변수 값을 변경할 수 없도록 선언
class Character
{
private:
	int health;
	string name;

public:
	void SetInfo(int m_health, string m_name)
	{
		health = m_health;
		name = m_name;

		health = 300;
	}

	void GetInfo() const
	{
		// const 함수 역할 : 함수 내에서 멤버 변수의 값을 읽기 전용 선언
		// health = 300;

		cout << "health 값 : " << health << endl;
		cout << "name 값 : " << name << endl;
	}
};
*/

// final
/*
// 더 이상 클래스나 가상 함수르 상속 받지 않고 재정의할 수 있도록 설정

class A
{
public:
	void FunctionA()
	{
		cout << "A 함수" << endl;
	}

	virtual void FunctionB1()
	{
		cout << "A 클래스에서 호출한 B1 함수" << endl;
	}
};

class B : public A
{
	void FunctionB()
	{
		cout << "B 함수" << endl;
	}

	virtual void FunctionB1() final
	{
		cout << "B클래스에서 호출한 B1 함수" << endl;
	}

};

class C : public B
{
	void FunctionB()
	{
		cout << "C 클래스에서 호출한 B 함수" << endl;
	}

	// FunctionB1()는 B 클래스에서 final로 선언했기 때문에
	// 자식 클래스 C에서 재정의할 수 없음
	// void FunctionB1() { }
};
*/

// 상속 접근지정자
/*
class CPU
{
public:
	void Count()
	{
		cout << "CPU Count" << endl;
	}
};

// 상속할 때 접근 지정자를 명시적으로 선언하지 않으면 private

// 상속에서 private 접근 지정자로 상속 받게 되면
// 부모 클래스의 멤버를 자식 클래스에서 호출 X
class ALU : public CPU
{

};
*/

// is-a 관계
// 일반적 개념과 구체적 개념의 관계

// has-a 관계
// 구성 관계를 의미하며 한 오브젝트(구성된 객체, 부분/멤버 객체)가
// 다른 오브젝트(composite type)에 속한다(belong to)

int main()
{
	// const 함수
	/*
	Character character;

	character.SetInfo(99, "칼리스타");

	character.GetInfo();
	*/

	// final
	/*
	C cClass;
	*/

	// 상속 접근지정자
	/*
	ALU alu;
	*/

	return 0;
}