#include <iostream>	// 입출력 스트림

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
	// 선택 정렬
	/*
	// 주어진 리스트 중에서 최소값을 찾은 다음
	// 그 값을 맨 앞에 위치한 값과 교체하는 정렬

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

	// 함수 객체
	// 함수처럼 동작하는 객체
	User user;
	user();

	return 0;
}