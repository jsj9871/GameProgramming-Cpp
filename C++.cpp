#include <iostream>	// ����� ��Ʈ��

using namespace std;

// �����Լ�
/*
class Animal
{
private:	// �Ӽ�
	float weight;


public:
	// ���� �Լ�
	// ����ϴ� Ŭ���� ���� ���� �Լ��� �����ǵ� �� �ִ� �Լ�

	// ���� �Լ� ��Ģ
	// -> public���� ����
	// -> static(����) ���� X
	// -> ����ð��� ������ ���� ����
	//    �⺻ Ŭ������ ������, ���� ���� ����
	// -> ���� Ŭ����, ���� Ŭ���� �Լ� ���� ����

	virtual void Sound()	// ���� �Լ� ����
	{
		cout << "������ �Ҹ�" << endl;
	}

	void Attack()
	{
		cout << "����" << endl;
	}
};

class Cat : public Animal
{
public:
	// ���� Ŭ������ �ִ� Sound() ����ϱ� ���ؼ�
	// ���� �̸����� ����
	void Sound()
	{
		cout << "�Ŀ�~" << endl;
	}

	void Attack()
	{
		cout << "������" << endl;
	}
};

class Dog : public Animal
{
public:
	void Sound()
	{
		cout << "�۸�!" << endl;
	}

	void Attack()
	{
		cout << "����" << endl;
	}
};
*/

// �����ε�
// ���� �̸��� �Լ��� ���� �� ���� �� �ִ� ���

// �Ű������� ������ Ÿ��(�ڷ���)���� ����
void Calculator(int x)
{
	cout << "int ����" << endl;
	cout << x << endl;
}

// ��ȯ���� ���� X
//int Calculator(int x)
//{
//	return x;
//}

void Calculator(float x, float y)
{
	cout << "float ����" << endl;
	cout << x + y << endl;
}

int main()
{
	// ������
	/*
	// ��ü�� ���� ���¸� �޾Ƶ��� �� �ִ� ����
	// ��Ȳ�� ���� �ٸ� �ǹ̸� �ο��Ͽ� ����� �� �ִ� �Ӽ�

	// ���ε�
	// ���α׷� �ҽ��� ���� �̸�, �ĺ���, �Լ��鿡 ����
	// ��, �Ӽ� Ȯ���ϴ� ����
	
	// ���� ���ε�
	// ������ ������ �̷����
	// ������ ������ ������ �Ӽ� ���� X

	// ���� ���ε�
	// ����ð��� �̷����
	// ����ð��� �ʿ��� ��ü�� �Լ��� ȣ���� �� ������, ������ ����

	// �Ϲ� �Լ��� ���� ���ε����� ������ ������ ȣ���� �Լ� ����

	// ���� �ð��� �̷������ ��

	// ���� �Լ��� ����ð��� ���ϴ� �Լ� ȣ��
	// ���� �Լ��� ������ ������ �Լ� ���� X -> ȣ�� ����
	Animal* animal1 = new Animal;	// new Cat <- ����ð��� �����Ϸ��� �ν�
	Animal* animal2 = new Dog;	// new Dog <- ����ð��� �����Ϸ��� �ν�

	animal1->Sound();
	animal1->Attack();

	animal1 = animal2;

	animal1->Sound();
	animal1->Attack();

	animal2->Sound();
	*/

	// �Լ��� �����ε�
	Calculator(10, 20);

	Calculator(10.5f, 16.7f);

	return 0;
}