#include <iostream>	// ����� ��Ʈ��
#include <conio.h>
#include <time.h>

using namespace std;

// ���� �Ҹ���
/*
// �������� ������ �Ҹ���, ���� ������ ���� X

class A
{
public:
	A()
	{
		cout << "A Ŭ���� ����" << endl;
	}

	virtual ~A()
	{
		cout << "A Ŭ���� �Ҹ�" << endl;
	}
};

class B : public A
{
public:
	B()
	{
		cout << "B Ŭ���� ����" << endl;
	}

	virtual ~B()
	{
		cout << "B Ŭ���� �Ҹ�" << endl;
	}
};
*/

// friend
/*
// Ŭ������ ��� �Լ� X, Ŭ������ �����ϸ�
// Ŭ������ ��� �Լ�ó�� private ����� ���� ����

class PeopleA
{
private:
	int age;

	friend void Information(PeopleA A)	// ���� �Լ��� ����
	{
		cout << "PeopleA Ŭ���� ����" << endl;
	}

	// ģ���� ������ Ŭ���� �̸� ����
	// public, private, protected �� ��� ����
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
	// ���� �Ҹ��� ȣ��Ǹ�
	/*
	// ��� ���� �� �Ʒ��� �ִ� ���� Ŭ������ �Ҹ��� ��� ȣ��
	// -> ���� Ŭ���� �Ҹ��� ������� ȣ��
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

	// ����
	/*
	int Num1;
	int Num2;

	cin >> Num1 >> Num2;

	cout << (Num2 % 10) * Num1 << endl;
	cout << (Num2 / 10) % 10 * Num1 << endl;
	cout << (Num2 / 100) * Num1 << endl;
	cout << Num1 * Num2 << endl;
	*/

	// �ߺ����� �ʴ� ���� ��
	// 1. �迭 ����
	// 2. �迭�� ���������� �� ����
	// [] [] [] [] []

	int array[10];
	srand(time(NULL));

	// �迭 �ε��� == �迭 �ε��� + 1
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