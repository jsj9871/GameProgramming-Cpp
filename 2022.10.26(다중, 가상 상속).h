#include <iostream>	// 입출력 스트림

using namespace std;

// 다중 상속
/*
// 클래스가 하나 이상의 상위 클래스로부터 여러가지 행동, 특징 상속 받는 것

class Keyboard
{
public:
	Keyboard()
	{
		cout << "Keyboard 호출" << endl;
	}

	void Input()
	{
		cout << "키보드 입력" << endl;
	}

	char key;
};

class Mouse
{
public:
	Mouse()
	{
		cout << "Mouse 호출" << endl;
	}

	void Input()
	{
		cout << "마우스 입력" << endl;
	}

	int sensor;
};

class Computer : public Keyboard, public Mouse
{
public:
	Computer(char _key, int _sensor)
	{
		Keyboard::key = _key;
		Mouse::sensor = _sensor;

		cout << Keyboard::key << endl;
		cout << Mouse::sensor << endl;
	}
};
*/

// 가상 상속
/*
class A
{
public:
	A()
	{
		cout << "A 클래스 호출" << endl;
	}
};

class B : virtual public A
{
public:
	B()
	{
		cout << "B 클래스 호출" << endl;
	}
};

class C : virtual public A
{
public:
	C()
	{
		cout << "C 클래스 호출" << endl;
	}
};

class D : public B, public C
{
public:
	D()
	{
		cout << "D 클래스 호출" << endl;
	}
};
*/

int main()
{
	// 다중 상속
	/*
	Computer computer('A', 40);

	// 다중 상속일 때 같은 이름의 함수 사용하려면
	// 클래스 명시, 범위 지정 연산자 사용해서 함수 호출
	computer.Keyboard::Input();	// Keyboard 클래스의 Input();
	computer.Mouse::Input();
	*/

	// 다이아몬드 상속
	/*
	// 하나의 자식 클래스가 상속 받는 서로 다른 부모 클래스들이
	// 같은 조부모 클래스를 상속 받는 구조

	D d;
	*/

	// 나머지

	int array[10] = { 0, };
	int result = 0;
	int input = 0;

	for (int i = 0; i < 10; i++)
	{
		cin >> input;
		array[i] = input % 42;
	}

	// [] [] [] [] [] [] [] [] [] []
	for (int i = 0; i <= 9; i++)
	{
		int count = 0;

		for (int j = i + 1; j <= 9; j++)
		{
			if (array[i] == array[j])
			{
				count++;
			}
		}

		if (count == 0)
		{
			result++;
		}

		cout << result << endl;
	}

	return 0;
}