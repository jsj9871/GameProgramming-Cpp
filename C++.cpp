#include <iostream>	// 입출력 스트림

using namespace std;

// 함수의 오버라이딩
/*
// 이미 정의된 함수 무시 -> 같은 이름 함수 새로 정의

class Parent
{
public:
	virtual void Talk()
	{
		cout << "Parent 클래스 Talk 함수" << endl;
	}

	void Information()
	{
		cout << "Parent 클래스" << endl;
	}
};

class Child : public Parent
{
public:
	// 상위클래스의 함수 이름과 동일하게 만들어야 함
	void Information()
	{
		cout << "Child 클래스" << endl;
	}

	void Talk()
	{
		cout << "Child 클래스 Talk 함수" << endl;
	}
};
*/

// 상속 관계일 때 생성자, 소멸자 호출 순서
/*
class Fruit
{
public:
	Fruit()
	{
		cout << "Fruit 클래스 생성" << endl;
	}

	~Fruit()
	{
		cout << "Fruit 클래스 소멸" << endl;
	}
};

class Apple : public Fruit
{
public:
	Apple()
	{
		cout << "Apple 클래스 생성" << endl;
	}

	~Apple()
	{
		cout << "Apple 클래스 소멸" << endl;
	}
};
*/

// 순수 가상 함수
/*
// 선언만 있고 구현 없는 가상 함수
class Pen
{
public:
	// 순수 가상함수는 함수에 0 넣음
	// 하위 클래스에서 재정의할 것으로 예상되는 함수에 대해
	// 미리 호출 계획 세우기위해 정의
	virtual void Draw() = 0;
	virtual void Color() = 0;
};

class Circle : public Pen
{
public:
	// 순수 가상함수는 하위클래스에서 재정의 필수
	void Draw()
	{
		cout << "동그라미" << endl;
	}

	void Color()
	{
		cout << "빨간색" << endl;
	}
};

class Rectangle : public Pen
{
public:
	void Draw()
	{
		cout << "네모" << endl;
	}

	void Color()
	{
		cout << "파란색" << endl;
	}
};
*/

int main()
{
	// 가상함수 테이블
	/*
	Parent* parent = new Parent;
	Child* child = new Child;

	parent->Talk();	// 가상 함수
	parent->Information();	// 일반 함수

	parent = child;
	// parent 포인터 참조를
	// child 메모리 공간 가리키도록 변경

	// 가상함수 테이블
	// 함수 포인터 배열
	// 이 포인터를 따라가서 가상함수로 선언된 멤버 함수의 주소에
	// 배열 형태로 접근하여 호출

	// 가상 함수 테이블이 실제 호출되어야 할 함수 위치 저장

	parent->Talk();	// 가상 함수
	parent->Information();	// 일반 함수
	*/

	// 상속관계일 때 생성자, 소멸자 호출 순서
	/*
	Apple apple;

	// 상속관계에서 하위 클래스는 상위 클래스의 생성자를 먼저 호출
	// 그 다음 하위 클래스 생성자 호출

	// 소멸자는 생성자의 역순 호출
	*/

	// 추상 클래스
	/*
	// 일부 함수가 구현되지 않고, 선언만 되어있는 클래스
	// 객체 생성 X

	// 상속 받은 클래스에서도 순수 가상함수를 모두 재정의해야만 생성 가능

	// 필요한 모든 클래스가 구현될 수 있도록하여 안정성 ↑

	Circle circle;
	circle.Draw();

	Rectangle rectangle;
	rectangle.Draw();
	*/

	return 0;
}