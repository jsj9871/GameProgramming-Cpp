#include <iostream>	// ����� ��Ʈ��

using namespace std;

// const �Լ�
/*
// const �Լ� ���ο��� ���� ���� ������ �� ������ ����
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
		// const �Լ� ���� : �Լ� ������ ��� ������ ���� �б� ���� ����
		// health = 300;

		cout << "health �� : " << health << endl;
		cout << "name �� : " << name << endl;
	}
};
*/

// final
/*
// �� �̻� Ŭ������ ���� �Լ��� ��� ���� �ʰ� �������� �� �ֵ��� ����

class A
{
public:
	void FunctionA()
	{
		cout << "A �Լ�" << endl;
	}

	virtual void FunctionB1()
	{
		cout << "A Ŭ�������� ȣ���� B1 �Լ�" << endl;
	}
};

class B : public A
{
	void FunctionB()
	{
		cout << "B �Լ�" << endl;
	}

	virtual void FunctionB1() final
	{
		cout << "BŬ�������� ȣ���� B1 �Լ�" << endl;
	}

};

class C : public B
{
	void FunctionB()
	{
		cout << "C Ŭ�������� ȣ���� B �Լ�" << endl;
	}

	// FunctionB1()�� B Ŭ�������� final�� �����߱� ������
	// �ڽ� Ŭ���� C���� �������� �� ����
	// void FunctionB1() { }
};
*/

// ��� ����������
/*
class CPU
{
public:
	void Count()
	{
		cout << "CPU Count" << endl;
	}
};

// ����� �� ���� �����ڸ� ��������� �������� ������ private

// ��ӿ��� private ���� �����ڷ� ��� �ް� �Ǹ�
// �θ� Ŭ������ ����� �ڽ� Ŭ�������� ȣ�� X
class ALU : public CPU
{

};
*/

// is-a ����
// �Ϲ��� ����� ��ü�� ������ ����

// has-a ����
// ���� ���踦 �ǹ��ϸ� �� ������Ʈ(������ ��ü, �κ�/��� ��ü)��
// �ٸ� ������Ʈ(composite type)�� ���Ѵ�(belong to)

int main()
{
	// const �Լ�
	/*
	Character character;

	character.SetInfo(99, "Į����Ÿ");

	character.GetInfo();
	*/

	// final
	/*
	C cClass;
	*/

	// ��� ����������
	/*
	ALU alu;
	*/

	return 0;
}