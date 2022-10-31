#include <iostream>	// ����� ��Ʈ��
#include <vector>

using namespace std;

// ���ø� (Ŭ����, �Լ�)
// �������� ���Ŀ� �������� �ʰ� �ϳ��� ���� �ٸ� ������ Ÿ�� ����

// �����Ϸ��� �̸� �Լ� ��Ʋ ����� ���� �Լ��� ȣ��� �� ���� �Լ� ȣ��

// �Լ� ���ø��� �����̱� ������ �޸� �Ҵ�� ��üȭ�Ǿ� ���� ���� ����

// �Լ� ���ø�
/*
template <typename T>
void Calculator(T x, T y)
{
	cout << "x�� �� : " << x << endl;
	cout << "y�� �� : " << y << endl;
}
*/

// Ŭ���� ���ø�
/*
template <class T>
class Game
{
private:
	T num1;
	T num2;

public:
	Game(T _num1, T _num2)
	{
		num1 = _num1;
		num2 = _num2;
	}

	T GetNumber1()
	{
		return num1;
	}

	T GetNumber2()
	{
		return num2;
	}
};
*/

// ���ø� Ư��ȭ
/*
// ���ø����� �̸� �����س��� Ÿ���� ������ ���
// ���� ó���ϰ� ���� �� ���
template <typename T>
void Add(T x, T y)
{
	cout << "x�� �� : " << x << endl;
	cout << "y�� �� : " << y << endl;
}

// int �Ű� ������ ������ �Ǹ� �� �Լ��� ó��
template<>
void Add(int x, int y)
{

}
*/

int main()
{
	// �Լ� ���ø�
	/*
	Calculator(10, 20);

	Calculator(10.5f, 6.7f);

	Calculator('A', 'B');
	*/

	// Ŭ���� ���ø�
	/*
	Game<int> game1(10, 20);
	cout << game1.GetNumber1() << endl;
	cout << game1.GetNumber2() << endl;

	Game<float> game2(8.5f, 9.6f);
	cout << game2.GetNumber1() << endl;
	cout << game2.GetNumber2() << endl;
	*/

	// ���ø� Ư��ȭ
	/*
	Add(10, 20);
	*/

	// STL (Standart Template Library)
	// ǥ�� ���ø� ���̺귯��
	// �ڷᱸ��, �˰��� Template ���·� ����

	// STL ����
	/*
	// 1. �����̳�
	// �����͸� �����ϴ� ��ü, �ڷᱸ���� ��Ƶ� ����
	//	- A : ���� �����̳�, �ڷḦ ���������� ����
	//	- B : ���� �����̳�, Ʈ�� ����
	//        �˻�, ����, ���� ����
	//	- c : �����̳� �����
	//        ���� �����̳��� �Ϻ� ��ɸ� ��� ����
	//        ��� ����, ����
	*/

	// Vector
	// �������� ���� �߰� ����
	// ũ�Ⱑ �ڵ����� �þ
	vector<int> data{ 10, 5 };

	// push_back() : �ڿ������� ������ �־���
	//data.push_back(10);
	//data.push_back(5);

	// pop_back() : �ڿ������� ������ ��
	data.pop_back();

	// size() : vector�� �����̳� ũ�� ��ȯ
	data.size();

	for (int i = 0; i < data.size(); i++)
	{
		cout << data[i] << endl;
	}

	// front() : �� �� ���� ���
	cout << data.front() << endl;

	// vector�� �� �տ� ���� �߰� X

	// List
	// 

	// Deque
	//

	return 0;
}