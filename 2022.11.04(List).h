#include <iostream>	// ����� ��Ʈ��

using namespace std;

int main()
{
	// STL ����Ʈ 
	/*
	// �� ��尡 �����Ϳ� �����͸� ������ �� �ٷ� ����� �������
	// �����͸� �����ϴ� �ڷᱸ���Դϴ�.
	list<int> list1;
	list1.push_front(5); // push_front : �� �տ� �����͸� �߰�
	list1.push_back(9);  // push_back : �� �ڿ� �����͸� �߰�
	list1.push_back(11); // [5]->[9]->[11]->[1]->[2]->[55]->[100]
	list1.push_back(1);
	list1.push_back(2);
	list1.pop_back();
	list1.pop_front();

	list1.sort(); // sort() : list�� �ִ� �����͸� ������������ �����մϴ�.
	// list1.clear(); // clear() : list �ȿ� �ִ� ��� �����͸� �����մϴ�.
	// list�� �������� �޸� ������ �ƴϱ� ������
	// �ε����� ������ �Ұ����մϴ�.
	// cout << list[0] << endl;
	for (int element : list1)
	{
		cout << element << endl;
	}
	*/

	int input = 0;
	int result = 0;

	int array[100] = { 0, };

	cin >> input;

	// �Է��ϴ� ����
	for (int i = 0; i < input; i++)
	{
		scanf_s("%1d", &array[i]);
	}

	// ���� �־��ִ� ����
	for (int i = 0; i < input; i++)
	{
		result += array[i];
	}

	cout << result << endl;

	return 0;
}