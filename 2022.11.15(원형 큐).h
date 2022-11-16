#include <iostream>	// ����� ��Ʈ��

using namespace std;

int buffer[6];

class CircleQueue
{
private:
	int front = 6 - 1;	 // �迭 �ִ� ũ�� -1
	int rear = 6 - 1;

public:
	bool Empty()
	{
		if (front == rear)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool isFull()
	{
		if ((rear + 1) % 6 == front)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	void Push(int value)
	{
		if (isFull() == true)
		{
			cout << "ť�� ���� �� ����" << endl;
		}
		else
		{
			rear = (rear + 1) % 6;
			buffer[rear] = value;
		}
	}

	int Pop()
	{
		if (Empty() == false)
		{
			front = (front + 1) % 6;

			int temp = buffer[front];

			buffer[front] = 0;

			return temp;
		}
		else
		{
			cout << "ť�� �������" << endl;
		}
	}
};

int main()
{


	// ���� ť
	// �迭�� ������ �ε����� ����־�� ��

	CircleQueue	Queue;
	Queue.Push(10);
	Queue.Push(20);
	Queue.Push(30);
	Queue.Push(40);
	Queue.Push(50);

	cout << Queue.Pop() << endl;
	cout << Queue.Pop() << endl;
	cout << Queue.Pop() << endl;
	cout << Queue.Pop() << endl;
	cout << Queue.Pop() << endl;

	Queue.Push(10);
	Queue.Push(20);
	Queue.Push(30);

	return 0;
}