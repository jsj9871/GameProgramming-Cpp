#include <iostream>	// ����� ��Ʈ��

using namespace std;

// �Լ��� �������̵�
/*
// �̹� ���ǵ� �Լ� ���� -> ���� �̸� �Լ� ���� ����

class Parent
{
public:
	virtual void Talk()
	{
		cout << "Parent Ŭ���� Talk �Լ�" << endl;
	}

	void Information()
	{
		cout << "Parent Ŭ����" << endl;
	}
};

class Child : public Parent
{
public:
	// ����Ŭ������ �Լ� �̸��� �����ϰ� ������ ��
	void Information()
	{
		cout << "Child Ŭ����" << endl;
	}

	void Talk()
	{
		cout << "Child Ŭ���� Talk �Լ�" << endl;
	}
};
*/

// ��� ������ �� ������, �Ҹ��� ȣ�� ����
/*
class Fruit
{
public:
	Fruit()
	{
		cout << "Fruit Ŭ���� ����" << endl;
	}

	~Fruit()
	{
		cout << "Fruit Ŭ���� �Ҹ�" << endl;
	}
};

class Apple : public Fruit
{
public:
	Apple()
	{
		cout << "Apple Ŭ���� ����" << endl;
	}

	~Apple()
	{
		cout << "Apple Ŭ���� �Ҹ�" << endl;
	}
};
*/

// ���� ���� �Լ�
/*
// ���� �ְ� ���� ���� ���� �Լ�
class Pen
{
public:
	// ���� �����Լ��� �Լ��� 0 ����
	// ���� Ŭ�������� �������� ������ ����Ǵ� �Լ��� ����
	// �̸� ȣ�� ��ȹ ��������� ����
	virtual void Draw() = 0;
	virtual void Color() = 0;
};

class Circle : public Pen
{
public:
	// ���� �����Լ��� ����Ŭ�������� ������ �ʼ�
	void Draw()
	{
		cout << "���׶��" << endl;
	}

	void Color()
	{
		cout << "������" << endl;
	}
};

class Rectangle : public Pen
{
public:
	void Draw()
	{
		cout << "�׸�" << endl;
	}

	void Color()
	{
		cout << "�Ķ���" << endl;
	}
};
*/

int main()
{
	// �����Լ� ���̺�
	/*
	Parent* parent = new Parent;
	Child* child = new Child;

	parent->Talk();	// ���� �Լ�
	parent->Information();	// �Ϲ� �Լ�

	parent = child;
	// parent ������ ������
	// child �޸� ���� ����Ű���� ����

	// �����Լ� ���̺�
	// �Լ� ������ �迭
	// �� �����͸� ���󰡼� �����Լ��� ����� ��� �Լ��� �ּҿ�
	// �迭 ���·� �����Ͽ� ȣ��

	// ���� �Լ� ���̺��� ���� ȣ��Ǿ�� �� �Լ� ��ġ ����

	parent->Talk();	// ���� �Լ�
	parent->Information();	// �Ϲ� �Լ�
	*/

	// ��Ӱ����� �� ������, �Ҹ��� ȣ�� ����
	/*
	Apple apple;

	// ��Ӱ��迡�� ���� Ŭ������ ���� Ŭ������ �����ڸ� ���� ȣ��
	// �� ���� ���� Ŭ���� ������ ȣ��

	// �Ҹ��ڴ� �������� ���� ȣ��
	*/

	// �߻� Ŭ����
	/*
	// �Ϻ� �Լ��� �������� �ʰ�, ���� �Ǿ��ִ� Ŭ����
	// ��ü ���� X

	// ��� ���� Ŭ���������� ���� �����Լ��� ��� �������ؾ߸� ���� ����

	// �ʿ��� ��� Ŭ������ ������ �� �ֵ����Ͽ� ������ ��

	Circle circle;
	circle.Draw();

	Rectangle rectangle;
	rectangle.Draw();
	*/

	return 0;
}