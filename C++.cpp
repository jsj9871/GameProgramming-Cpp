#include <iostream>	// 입출력 스트림
#include <queue>
#include <stack>

using namespace std;

int main()
{
	// 큐 (FIFO) First In First Out
	/*
	// 먼저 들어온 데이터가 먼저 나가는 구조의 컨테이너
	queue<int> Queue;

	// [[10] [20] [30]]
	// Queue.push(값) : 큐 컨테이너에 데이터를 넣음
	Queue.push(10);	// [10]
	Queue.push(20);	// [10] [20]
	Queue.push(30); // [10] [20] [30]

	int value = Queue.size();

	for (int i = 0; i < value; i++)
	{
		cout << Queue.front() << endl;
		Queue.pop();
	}

	// Queue.pop() : 큐 컨테이너에서 데이터를 꺼냄
	//Queue.pop();	// [20] [30]

	// Queue.front() : 큐 컨테이너에 저장되어 있는 원소중에서 가장 앞에 있는 값 출력
	//cout << Queue.front() << endl;

	// Queue.size() : 큐 컨테이너의 크기 출력
	//cout << Queue.size() << endl;

	// Queue.empty() : 큐 컨테이너가 비어있는지 확인
	//cout << Queue.empty() << endl;
	*/

	// 스택 (LIFO) Last In First Out
	/*
	// 마지막에 들어온 데이터가 먼저 나가는 구조의 컨테이너
	stack<int> Stack;
	stack<int> otherStack;

	otherStack.push(-100);	// -100
	otherStack.push(-200);	// -200 -100
	otherStack.push(-300);	// -300 -200 -100

	Stack.push(10);	// 10
	Stack.push(20);	// 20 10
	Stack.push(30);	// 30 20 10

	// swap() : 두 스택의 내용을 바꿈
	swap(Stack, otherStack);

	// Stack.top() : 가장 위에 있는 원소 출력
	cout << Stack.top() << endl;

	// Stack.pop() : 가장 위에 있는 원소 뺌
	Stack.pop();

	// Stack.size() : 스택 컨테이너에 들어있는 크기 반환
	cout << Stack.size() << endl;
	*/

	// 개수 세기
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