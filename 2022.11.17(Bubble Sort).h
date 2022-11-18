#include <iostream>	// 입출력 스트림

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
	// Bubble Sort (거품 정렬)
	/*
	// 서로 인접한 두 원소의 대소 비교
	// 조건에 맞지 않다면 자리 교환하는 정렬 알고리즘

	// 거품 정렬 시간 복잡도
	// O(n*2)

	// 거품 정렬 공간 복잡도
	// O(n)
	// 별도 메모리 공간이 필요하지 않은 제자리 정렬

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

	// 연산자 우선 순위
	/*
	// 수학 및 컴퓨터 프로그래밍에서 연산의 우선 순위는
	// 모호하게 해석 가능한 수식에서 어느 연산을 먼저 계산할지 결정

	char charArray[6] = { "Korea" };
	char* charPtr = charArray;

	cout << (char)(*charPtr + 1) << endl;

	// 1 순위
	// 변수++, 변수-- : 후위

	// 3 순위
	// * : 곱셈
	// / : 나눗셈
	// % : 나머지
	*/

	// 함수 포인터 배열
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