#include <iostream>

using namespace std;


int main()
{
	// ��� ����
	// �������� ���� ���� ������ �ʰ�,
	// �ܼ��ϰ� �� ���ڰ� �� �� �ִ���
	// ������ ���� ������ ���� �����ϴ� �˰����Դϴ�.

	int array[10] = { 1, 5, 4, 1, 2, 4, 3, 3, 3, 5 };
	int count[5] = { 0, };

	for (int i = 0; i < 10; i++)
	{
		count[array[i] - 1] += 1;
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < count[i]; j++)
		{
			cout << i + 1 << " ";
		}
	}

	return 0;
}