#include <iostream>	// ����� ��Ʈ��
#include <string>
using namespace std;

// namespace
/*
// �Ӽ� ������ �� �ֵ��� ��ȿ ���� �����ϴ� ����

namespace ClientA
{
	void Attack()
	{
		cout << "���Ÿ� ����" << endl;
	}
}

// ClientA�� namespace ��������ʾƵ� ���
using namespace ClientA;

namespace ClientB
{
	void Attack()
	{
		cout << "�ٰŸ� ����" << endl;
	}
}

int value = 20;	// ���� ���� value (������)
*/

// �⺻ �Ű�����
// �Լ� ������ �� �Ű����� ����� ���ÿ� �ʱ�ȭ

// �⺻ �Ű������� �����ʿ������� ����
void Function(int x, int y = 30, int z = 30)
{
	cout << "x�� �� : " << x << endl;
	cout << "y�� �� : " << y << endl;
	cout << "z�� �� : " << z << endl;
}

int main()
{
	// ���� ���� ������
	/*
	// ���� �������� ���Ǵ� �ĺ��� ����

	int value = 10;	// ���� ���� value (����)

	// ��ǻ�� ��� �̷� (���� ��Ģ)
	// ���� ������ ���� �̸��� ���� ������ ����Ǿ��� ��
	// ����� ������ �����ϴ� ���� �̸� ���

	cout << "value�� �� : " << value << endl;
	cout << "���� ���� value�� �� : " << ::value << endl;

	Attack();	// using namespace ClientA

	ClientB::Attack();
	*/

	// �⺻ �Ű�����
	/*
	// �����ϸ� �Լ� �μ� �������� �ʾƵ� ��� ����

	// �Ű������� �Լ� �μ� ������ �� ���ʺ��� ���� ��
	Function(5);
	*/

	// getline
	/*
	string name;

	// [K] [i] [m] [\0] [g] [e]
	// ���ڿ��� NULL���ڱ����� ���

	//cin >> name;

	// getline() : ǥ���Է� �޴� ��� Enter ���ο� ���� �Է¹��� ���ڿ� ����
	getline(cin, name);

	cout << name;
	*/

	// OX ����
	int input, score, sum;
	char buffer[80];

	cin >> input;

	for (int i = 0; i < input; i++)
	{
		score = 1;
		sum = 0;

		cin >> buffer;

		// [O][X][X][O][X][O][O] = 5
		for (int j = 0; j < strlen(buffer); j++)
		{
			if (buffer[j] == 'O')
			{
				sum += score;
				score++;
			}

			if (buffer[j] == 'X')
			{
				score = 1;
			}
		}

		cout << sum << endl;
	}

	return 0;
}