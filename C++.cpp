#include <iostream>	// 입출력 스트림

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
			cout << "큐가 비었음" << endl;
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
			cout << "데이터 가득 차서 넣을 수 없음" << endl;
			return true;
		}
		else
		{
			return false;
		}
	}

	void Push(int value)
	{
		// 데이터가 가득 차 있는 상태면 데이터 못 넣음
		if (IsFull() == true)
		{
			cout << "데이터 가득 차서 넣을 수 없음" << endl;
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
			cout << "큐 비었음" << endl;

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
	// 큐
	// FIFO (First In First Out)
	// 먼저 들어온 데이터가 먼저 나가는 구조

	// 선형 큐
	// 문제점
	// 데이터를 추가할 때 index 값을 감소시키지 않고 증가만 시키기때문에
	// 앞에 데이터가 없을 때에도 큐에 데이터를 저장할 수 없는 형태 나타남

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

	// 원형 큐


	return 0;
}