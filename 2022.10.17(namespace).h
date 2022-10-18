#include <iostream>	// 입출력 스트림
#include <string>
using namespace std;

// namespace
/*
// 속성 구분할 수 있도록 유효 범위 설정하는 영역

namespace ClientA
{
	void Attack()
	{
		cout << "원거리 공격" << endl;
	}
}

// ClientA의 namespace 명시하지않아도 사용
using namespace ClientA;

namespace ClientB
{
	void Attack()
	{
		cout << "근거리 공격" << endl;
	}
}

int value = 20;	// 전역 변수 value (데이터)
*/

// 기본 매개변수
// 함수 선언할 때 매개변수 선언과 동시에 초기화

// 기본 매개변수는 오른쪽에서부터 정의
void Function(int x, int y = 30, int z = 30)
{
	cout << "x의 값 : " << x << endl;
	cout << "y의 값 : " << y << endl;
	cout << "z의 값 : " << z << endl;
}

int main()
{
	// 범위 지정 연산자
	/*
	// 여러 범위에서 사용되는 식별자 구분

	int value = 10;	// 지역 변수 value (스택)

	// 컴퓨터 언어 이론 (범위 규칙)
	// 젼역 변수와 같은 이름의 지역 변수가 선언되었을 때
	// 가까운 범위에 존재하는 변수 이름 사용

	cout << "value의 값 : " << value << endl;
	cout << "전역 변수 value의 값 : " << ::value << endl;

	Attack();	// using namespace ClientA

	ClientB::Attack();
	*/

	// 기본 매개변수
	/*
	// 선언하면 함수 인수 전달하지 않아도 사용 가능

	// 매개변수는 함수 인수 전달할 때 왼쪽부터 값이 들어감
	Function(5);
	*/

	// getline
	/*
	string name;

	// [K] [i] [m] [\0] [g] [e]
	// 문자열은 NULL문자까지만 출력

	//cin >> name;

	// getline() : 표준입력 받는 경우 Enter 여부에 따라 입력받을 문자열 구분
	getline(cin, name);

	cout << name;
	*/

	// OX 퀴즈
	int input, score, sum;
	char buffer[80];

	cin >> input;

	for (int i = 0; i < input; i++)
	{
		score = 1;
		sum = 0;

		cin >> buffer;

		// [O][X][X][O][X][O][O] = 5
		for (int j = 0; j < strlen(buffer); j++)
		{
			if (buffer[j] == 'O')
			{
				sum += score;
				score++;
			}

			if (buffer[j] == 'X')
			{
				score = 1;
			}
		}

		cout << sum << endl;
	}

	return 0;
}