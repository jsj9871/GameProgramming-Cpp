#include <iostream>	// ����� ��Ʈ��

using namespace std;

// ��� �̴ϼȶ�����
// ������ ���� ��� �ʱ�ȭ�ϴ� ���
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

	// �ʱ�ȭ ��� ��Ȯ�� �ν�
	// ����� ���ÿ� �ʱ�ȭ -> ���̳ʸ� �ڵ� ���� -> �ӵ� ����
	/*
	Person(int _x, int _y) : x(_x), y(_y)
	{
		cout << "x�� �� : " << x << endl;
		cout << "y�� �� : " << y << endl;
	}
	*/
};

class Child : public Person
{
public :
	void ChildInfo()
	{
		cout << "Child Ŭ����" << endl;
		cout << b << endl;
	}

	float b = 3.65;
};

class Child2 : public Person
{
public:
	void ChildInfo()
	{
		cout << "Child Ŭ����" << endl;
		cout << c << endl;
	}

	int c = 5;
};

// static_cast
// �⺻ �ڷ����� ����ȯ, ���� Ŭ�������� ���� Ŭ������ ������ ��ȯ ���꿡 ����ϴ� ������
// ������ ������ ����ȯ

// dynamic_cast
// ĳ���� ���� �� �ּ� �� ��ȯ, ���� �� nullptr ��ȯ

// ������
// 1. ��ü ������ ���� ����ȯ�� ����
// 2. virtual Ű���尡 �ϳ��� �����ϴ� ��Ӱ��迡�� ����

class A
{
public:
	virtual void Function()
	{
		cout << "A Ŭ����" << endl;
	}
};

class B : public A
{
public:
	void Function()
	{
		cout << "B Ŭ����" << endl;
	}
};

int main()
{
	// ��� �̴ϼ� ������
	//Person person1(10, 20);

	// static_cast
	/*
	Person* ptr1 = new Child();
	
	// �߸��� ��Ӱ��� ����ȯ ���� ������
	Child2* cptr1 = static_cast<Child2*>(ptr1);
	cptr1->ChildInfo();

	//int value = 10;

	// static_cast�� ������ �⺻ �ڷ����� Ŭ������ ����ȯ
	// Child * c = (Child*)value;
	
	// �������� ��ȯ ������ Ÿ�� ��ȯ
	// static_cast<�ٲٷ��� Ÿ��>(���);
	// ������ ������ ����ȯ�� ���� Ÿ�� ���� ǥ��

	// int�� ���� -> double ����ȯ
	// ū ���� X -> error ǥ�� X
	//double a = static_cast<int>(value);
	*/

	// dynamic_cast
	A* aptr = new A();
	A* bptr = new B();
	B* bptr2 = new B();
	B* bptr3 = new B();

	// ������ ���� : Ÿ�� ��ȯ �Ұ�
	// bbtr3 = aptr;

	// ������ ���� : ��Ÿ�ӿ� Ÿ�Ժ�ȯ�� �����ϸ� NULL ��ȯ
	bptr3 = dynamic_cast<B*>(aptr);
	return 0;
}