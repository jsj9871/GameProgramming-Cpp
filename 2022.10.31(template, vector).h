#include <iostream>	// 입출력 스트림
#include <vector>

using namespace std;

// 템플릿 (클래스, 함수)
// 데이터의 형식에 의존하지 않고 하나의 값이 다른 데이터 타입 가능

// 컴파일러는 미리 함수 형틀 기억한 다음 함수가 호출될 때 실제 함수 호출

// 함수 템플릿은 선언이기 때문에 메모리 할당과 구체화되어 있지 않은 상태

// 함수 템플릿
/*
template <typename T>
void Calculator(T x, T y)
{
	cout << "x의 값 : " << x << endl;
	cout << "y의 값 : " << y << endl;
}
*/

// 클래스 템플릿
/*
template <class T>
class Game
{
private:
	T num1;
	T num2;

public:
	Game(T _num1, T _num2)
	{
		num1 = _num1;
		num2 = _num2;
	}

	T GetNumber1()
	{
		return num1;
	}

	T GetNumber2()
	{
		return num2;
	}
};
*/

// 템플릿 특수화
/*
// 템플릿에서 미리 지정해놓은 타입이 들어왔을 경우
// 따로 처리하고 있을 때 사용
template <typename T>
void Add(T x, T y)
{
	cout << "x의 값 : " << x << endl;
	cout << "y의 값 : " << y << endl;
}

// int 매개 변수로 들어오게 되면 이 함수로 처리
template<>
void Add(int x, int y)
{

}
*/

int main()
{
	// 함수 템플릿
	/*
	Calculator(10, 20);

	Calculator(10.5f, 6.7f);

	Calculator('A', 'B');
	*/

	// 클래스 템플릿
	/*
	Game<int> game1(10, 20);
	cout << game1.GetNumber1() << endl;
	cout << game1.GetNumber2() << endl;

	Game<float> game2(8.5f, 9.6f);
	cout << game2.GetNumber1() << endl;
	cout << game2.GetNumber2() << endl;
	*/

	// 템플릿 특수화
	/*
	Add(10, 20);
	*/

	// STL (Standart Template Library)
	// 표준 템플릿 라이브러리
	// 자료구조, 알고리즘 Template 형태로 제공

	// STL 구성
	/*
	// 1. 컨테이너
	// 데이터를 저장하는 객체, 자료구조를 모아둔 집합
	//	- A : 순차 컨테이너, 자료를 순차적으로 저장
	//	- B : 연관 컨테이너, 트리 구조
	//        검색, 삽입, 삭제 빠름
	//	- c : 컨테이너 어댑터
	//        기존 컨테이너의 일부 기능만 사용 가능
	//        기능 제한, 변형
	*/

	// Vector
	// 동적으로 원소 추가 가능
	// 크기가 자동으로 늘어남
	vector<int> data{ 10, 5 };

	// push_back() : 뒤에서부터 데이터 넣어줌
	//data.push_back(10);
	//data.push_back(5);

	// pop_back() : 뒤에서부터 데이터 뺌
	data.pop_back();

	// size() : vector의 컨테이너 크기 반환
	data.size();

	for (int i = 0; i < data.size(); i++)
	{
		cout << data[i] << endl;
	}

	// front() : 맨 앞 원소 출력
	cout << data.front() << endl;

	// vector는 맨 앞에 원소 추가 X

	// List
	// 

	// Deque
	//

	return 0;
}