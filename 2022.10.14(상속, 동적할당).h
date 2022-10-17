#include <iostream>	// ����� ��Ʈ��

// ���
// ������ ���ǵǾ� �ִ� ���� Ŭ������ ��� ��� ����, �Լ��� �����޾�
// ���� Ŭ������ ����� �� �ִ� ��

// ���� Ŭ���� : ����� �����ִ� Ŭ����
// ���� Ŭ���� : ����� �����޴� Ŭ����

class Phone
{
public:
	// �����ڴ� �ڽ��� Ŭ���� �̸� (��ȯ�� X)
	Phone()
	{
		std::cout << "�޴����� �����Ǿ����ϴ�." << std::endl;
	}

	// �Ҹ��ڴ� �ڽ��� Ŭ���� �̸� �տ� ~ ���
	~Phone()
	{
		std::cout << "�ڵ����� �ı��Ǿ����ϴ�." << std::endl;
	}

	std::string name;

	void Message()
	{
		std::cout << "���� ������" << std::endl;

		// ���� Ŭ������ ���� Ŭ�������� ������ �Լ� ��� X
		// Touch();
	}

protected:
	void Call()
	{
		std::cout << "��ȭ �ɱ�" << std::endl;
	}
};

// ����ϴ� ���
// (����)Ŭ���� : (ex : Phone) <- ���� Ŭ���� �̸�
class SmartPhone : Phone
{
public:
	void Touch()
	{
		Call();
	}
};

int main()
{
	// C++ ���� �Ҵ�
	/*
	// new > (�� ������ �Ҵ��� �޸� ���� ũ��)
	int* ptr = new int;

	*ptr = 100;

	std::cout << *ptr << std::endl;
	std::cout << ptr << std::endl;

	// delete : new�� ���� �Ҵ��� �޸� ���� ����
	delete ptr;


	int* arrptr = new int[5];

	// 4byte * 5 = 20 byte
	// [0] [1] [2] [3] [4]

	arrptr[0] = 20;
	arrptr[1] = 30;
	arrptr[2] = 40;
	arrptr[3] = 50;
	arrptr[4] = 60;

	for (int i = 0; i < 5; i++)
	{
		std::cout << arrptr[i] << std::endl;
	}

	delete [] arrptr;
	*/

	//Phone phone;	// <- ����

	Phone* phone = new Phone();	// <- ��

	delete phone;
	//SmartPhone* sPhone = new SmartPhone();

	// ���� ���ε�
	// �迭 ũ��� ������ ������ �޸� ũ�� ����
	// �迭 [100]; <- 80 ~ 90�� �޸� ���� ����

	// Ư�� ������ �迭 ũ�� 100�� ����ؾߵ�����,
	// �� Ư�� ������ �Ѿ�� ���̻� ����� �ʿ� ���� ��

	// ���� �Ҵ��� ���� �ð��� �޸� ���� Ȯ��, ���̰� ����

	//phone->Message();
	//sPhone->Touch();

	// ������
	// Ŭ������ ��ü�� �����Ǿ��� �� ��ü �ʱ�ȭ �������� �ڵ� ȣ��Ǵ� �Լ�

	// �Ҹ���
	// Ŭ������ ��ü�� �Ҹ�Ǿ����� �ڵ� ȣ��Ǵ� �Լ�

	return 0;
}