#include <iostream>	// ����� ��Ʈ��

// ��Ʈ��
// �ð��� �帧�� ���� ���������� �߻��ϴ� ������ �帧

// auto�� �Ű� ������ ��� X
/*void Function(auto x)
{

}*/

// Ŭ����
// Ư�� ��ü�� �Ӽ��� ����� ���� ����ü
class Player
{
// ���� ������
// Ŭ���� �ܺο��� ���� ���� ���(����, �Լ�)�� Ŭ���� �ܺο���
// ������ ������ �ʴ� ���(����, �Լ�) ����

// public : Ŭ���� ����, �ڱⰡ ����ϰ� �ִ� Ŭ���� �ܺ� ���� ���
// private : Ŭ���� ���� ���� ���
//           �ڱⰡ ����ϴ� Ŭ����, Ŭ���� �ܺ� ���� ��� X
// protected : Ŭ���� ����, �ڱⰡ ����ϴ� Ŭ���� ���� ���
//             Ŭ���� �ܺ� ���� ��� X

// Ŭ������ �⺻������ private ����

public:
	int health = 100;
	float height = 183.5;
	std::string name = "Joung Seong Jin";

private:
	void Attack()
	{
		std::cout << "����" << std::endl;
	}
};

int main()
{
	// C++ �⺻ �����
	/*
	// std::cout : ����ϱ� ���� ��ü
	// std::endl : ���ڿ� ����

	// ���� ������ "<<" : ��� ��Ʈ�� ��ü�� ����Ʈ�� ������ ������

	char alphabet = 'B';
	int value = 10;
	float variable = 10.5;

	std::cout << "alphabet ������ �� : " << alphabet << std::endl;
	std::cout << "value ������ �� : " << value << std::endl;
	std::cout << "variable ������ �� : " << variable << std::endl;

	// ���� ������ ">>" : �Է��� �����͸� �Է� ��Ʈ������ �����Ͽ�
	//                   �����ʿ� ��ġ�� ������ �� ����

	// std::cin : �Է��ϱ� ���� ��ü

	std::cin >> value;

	std::cout << "value ������ �� : " << value << std::endl;

	std::cout << "�ι�° �ȳ��ϼ���.";
	*/

	// bool = ���� ������ ��Ÿ���� �ڷ���
	//bool value = true;

	// ���� ��� for��
	/*
	// ���۰� ������ �˷����� �ʾƵ� ������ ũ�⿡ ���� ������ ��ȸ���ִ� �ݺ���

	int array [] = { 1, 2, 3, 4, 5 };

	// element : ���� �̸�
	// array : ������ ����Ʈ (�迭, ����, ����Ʈ)
	for (int element : array)
	{	
		// ���� ��� for�� ����
		// 1. for�� �� index ���� ���� X
		// 2. for�� �� �迭�� ��� ���� X

		// ���� ������ ���·� ������Ű�� �� ����
		// element += 1;
		
		// �迭 �� �� ��ü �ʱ�ȭ ����
		// element = 10;

		element = 10;

		// element : call by value ���·� �� �Ѱ���
		std::cout << element << std::endl;
	}

	std::cout << "--------" << std::endl;

	for (int element : array)
	{
		std::cout << element << std::endl;
	}
	*/

	// �ڷ��� �߷�
	/*
	// ������ �Լ��� �����ϰ� ������ �̷���� ��
	// �����Ϸ��� �ڵ����� �ڷ����� �߷�

	// �ڷ��� �߷��� ������ �ʱ�ȭ���� ������ ��� X

	auto value = 10;
	auto decimal = 20.6;

	std::cout << "value ������ �� : " << value << std::endl;
	*/

	// Ŭ����
	Player kim;

	//kim.health = 100;
	//kim.size = 10.56;
	//kim.name = "Kim";

	std::cout << kim.health << " " << kim.height << " " << kim.name << std::endl;

	return 0;
}