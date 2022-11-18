#include <iostream>	// ����� ��Ʈ��

using namespace std;

void Plus(int x, int y)
{
	cout << x + y << endl;
}

void Effect(int x, int y)
{
	cout << x * y << endl;
}

void Count(int x, int y)
{
	cout << x / y << endl;
}

int main()
{
	// Bubble Sort (��ǰ ����)
	/*
	// ���� ������ �� ������ ��� ��
	// ���ǿ� ���� �ʴٸ� �ڸ� ��ȯ�ϴ� ���� �˰���

	// ��ǰ ���� �ð� ���⵵
	// O(n*2)

	// ��ǰ ���� ���� ���⵵
	// O(n)
	// ���� �޸� ������ �ʿ����� ���� ���ڸ� ����

	int data[5] = { 2, 5, 4, 1, 3 };

	int i, j;

	int temp;

	for (int i = 0; i <= 5; i++)
	{
		for (int j = 0; j < 4 - i; j++)
		{
			if (data[j] > data[j + 1])
			{
				temp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < 5; i++)
	{
		cout << data[i] << endl;
	}
	*/

	// ������ �켱 ����
	/*
	// ���� �� ��ǻ�� ���α׷��ֿ��� ������ �켱 ������
	// ��ȣ�ϰ� �ؼ� ������ ���Ŀ��� ��� ������ ���� ������� ����

	char charArray[6] = { "Korea" };
	char* charPtr = charArray;

	cout << (char)(*charPtr + 1) << endl;

	// 1 ����
	// ����++, ����-- : ����

	// 3 ����
	// * : ����
	// / : ������
	// % : ������
	*/

	// �Լ� ������ �迭
	void (*funcPtr[3])(int, int);

	funcPtr[0] = Plus;
	funcPtr[1] = Effect;
	funcPtr[2] = Count;

	for (int i = 0; i < 3; i++)
	{
		funcPtr[i](10, 20);

		// Plus(10, 20)
		// Effect (10, 20)
		// Count (10, 20)
	}

	return 0;
}