#include <iostream>	// ����� ��Ʈ��
#include <queue>
#include <stack>

using namespace std;

int main()
{
	// ť (FIFO) First In First Out
	/*
	// ���� ���� �����Ͱ� ���� ������ ������ �����̳�
	queue<int> Queue;

	// [[10] [20] [30]]
	// Queue.push(��) : ť �����̳ʿ� �����͸� ����
	Queue.push(10);	// [10]
	Queue.push(20);	// [10] [20]
	Queue.push(30); // [10] [20] [30]

	int value = Queue.size();

	for (int i = 0; i < value; i++)
	{
		cout << Queue.front() << endl;
		Queue.pop();
	}

	// Queue.pop() : ť �����̳ʿ��� �����͸� ����
	//Queue.pop();	// [20] [30]

	// Queue.front() : ť �����̳ʿ� ����Ǿ� �ִ� �����߿��� ���� �տ� �ִ� �� ���
	//cout << Queue.front() << endl;

	// Queue.size() : ť �����̳��� ũ�� ���
	//cout << Queue.size() << endl;

	// Queue.empty() : ť �����̳ʰ� ����ִ��� Ȯ��
	//cout << Queue.empty() << endl;
	*/

	// ���� (LIFO) Last In First Out
	/*
	// �������� ���� �����Ͱ� ���� ������ ������ �����̳�
	stack<int> Stack;
	stack<int> otherStack;

	otherStack.push(-100);	// -100
	otherStack.push(-200);	// -200 -100
	otherStack.push(-300);	// -300 -200 -100

	Stack.push(10);	// 10
	Stack.push(20);	// 20 10
	Stack.push(30);	// 30 20 10

	// swap() : �� ������ ������ �ٲ�
	swap(Stack, otherStack);

	// Stack.top() : ���� ���� �ִ� ���� ���
	cout << Stack.top() << endl;

	// Stack.pop() : ���� ���� �ִ� ���� ��
	Stack.pop();

	// Stack.size() : ���� �����̳ʿ� ����ִ� ũ�� ��ȯ
	cout << Stack.size() << endl;
	*/

	// ���� ����
	/*
	int n = 0;
	int array[100] = { 0, };
	int selectNumber = 0;
	int result = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> array[i];
	}

	cin >> selectNumber;

	for (int i = 0; i < n; i++)
	{
		if (selectNumber == array[i])
		{
			result++;
		}
	}

	cout << result << endl;
	*/

	return 0;
}