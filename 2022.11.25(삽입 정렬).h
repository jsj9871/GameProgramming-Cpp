#include <iostream>

using namespace std;

int main()
{
	// ���� ���� 
	// �迭�� ��� ��Ҹ� �տ������� ���ʴ��
	// �̹� ���ĵ� �迭 �κа� ���Ͽ�, �ڽ���
	// ��ġ�� ã�� ���������ν� ������ �ϼ��ϴ� �˰����Դϴ�.

	int array[5] = { 5, 3, 7, 1, 2 };
	int j = 0;
	int key = 0;

	for (int i = 1; i < 5; i++)
	{
		//  3       3
		key = array[i];

		// j�� 0�� ���� �ݺ��̵˴ϴ�.	

		for (j = i - 1; j >= 0 && array[j] > key; j--)
		{
			array[j + 1] = array[j];
		}

		// j�� -1�� �Ǿ��ְ���?
		// j(-1) + 1 = 0;
		array[j + 1] = key;
	}

	for (int i = 0; i < 5; i++)
	{
		cout << array[i] << endl;
	}

	return 0;
}