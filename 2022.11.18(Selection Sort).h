#include <iostream>	// ����� ��Ʈ��

using namespace std;

class User
{
public:
	void operator() ()
	{
		cout << "Function Object" << endl;
		cout << "signal : " << signal << endl;
	}

private:
	int signal = 0;
};

int main()
{
	// ���� ����
	/*
	// �־��� ����Ʈ �߿��� �ּҰ��� ã�� ����
	// �� ���� �� �տ� ��ġ�� ���� ��ü�ϴ� ����

	int data[5] = { 10, 3, 4, 2, 1 };

	int min;

	int temp;

	for (int i = 0; i < 5; i++)
	{
		min = i;

		for (int j = i; j < 5; j++)
		{
			if (data[min] > data[j])
			{
				min = j;
			}
		}

		temp = data[i];
		data[i] = data[min];
		data[min] = temp;
	}

	for (int i = 0; i < 5; i++)
	{
		cout << data[i] << endl;
	}
	*/

	// �Լ� ��ü
	// �Լ�ó�� �����ϴ� ��ü
	User user;
	user();

	return 0;
}