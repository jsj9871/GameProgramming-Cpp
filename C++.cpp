#include <iostream>	// ����� ��Ʈ��

using namespace std;

int buffer[5] = { 0, };

class Queue
{
private:
	int rear = -1;
	int front = -1;

public:

	void BufferPrint()
	{
		for (int i = 0; i < 5; i++)
		{
			cout << buffer[i] << endl;
		}
	}

	bool Empty()
	{
		if (front == rear)
		{
			cout << "ť�� �����" << endl;
			return true;
		}
		else
		{
			return false;
		}
	}

	bool IsFull()
	{
		if (rear == 4)
		{
			cout << "������ ���� ���� ���� �� ����" << endl;
			return true;
		}
		else
		{
			return false;
		}
	}

	void Push(int value)
	{
		// �����Ͱ� ���� �� �ִ� ���¸� ������ �� ����
		if (IsFull() == true)
		{
			cout << "������ ���� ���� ���� �� ����" << endl;
		}
		else
		{
			buffer[++rear] = value;
		}
	}

	int Pop()
	{
		int temp;

		// rear == front
		if (Empty() == true)
		{
			cout << "ť �����" << endl;

			return 0;
		}
		else
		{
			int temp = buffer[++front];

			buffer[front] = 0;

			return temp;
		}
	}
};

int main()
{
	// ť
	// FIFO (First In First Out)
	// ���� ���� �����Ͱ� ���� ������ ����

	// ���� ť
	// ������
	// �����͸� �߰��� �� index ���� ���ҽ�Ű�� �ʰ� ������ ��Ű�⶧����
	// �տ� �����Ͱ� ���� ������ ť�� �����͸� ������ �� ���� ���� ��Ÿ��

	Queue queue;

	queue.Push(1);
	queue.Push(2);
	queue.Push(3);
	queue.Push(4);
	queue.Push(5);

	cout << queue.Pop() << endl;
	cout << queue.Pop() << endl;
	cout << queue.Pop() << endl;
	cout << queue.Pop() << endl;
	cout << queue.Pop() << endl;

	queue.BufferPrint();

	queue.Push(10);

	// ���� ť


	return 0;
}