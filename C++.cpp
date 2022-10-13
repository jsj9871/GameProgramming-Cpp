#include <iostream>	// 입출력 스트림

// 스트림
// 시간의 흐름에 따라 연속적으로 발생하는 데이터 흐름

// auto는 매개 변수로 사용 X
/*void Function(auto x)
{

}*/

// 클래스
// 특정 객체에 속성과 기능을 정한 집합체
class Player
{
// 접근 지정자
// 클래스 외부에서 접근 가능 멤버(변수, 함수)와 클래스 외부에서
// 접근이 허용되지 않는 멤버(변수, 함수) 구분

// public : 클래스 내부, 자기가 상속하고 있는 클래스 외부 접근 허용
// private : 클래스 내부 접근 허용
//           자기가 상속하는 클래스, 클래스 외부 접근 허용 X
// protected : 클래스 내부, 자기가 상속하는 클래스 접근 허용
//             클래스 외부 접근 허용 X

// 클래스는 기본적으로 private 설정

public:
	int health = 100;
	float height = 183.5;
	std::string name = "Joung Seong Jin";

private:
	void Attack()
	{
		std::cout << "공격" << std::endl;
	}
};

int main()
{
	// C++ 기본 입출력
	/*
	// std::cout : 출력하기 위한 객체
	// std::endl : 문자열 개행

	// 삽입 연산자 "<<" : 출력 스트림 개체에 바이트로 보내는 연산자

	char alphabet = 'B';
	int value = 10;
	float variable = 10.5;

	std::cout << "alphabet 변수의 값 : " << alphabet << std::endl;
	std::cout << "value 변수의 값 : " << value << std::endl;
	std::cout << "variable 변수의 값 : " << variable << std::endl;

	// 추출 연산자 ">>" : 입력한 데이터를 입력 스트림에서 추출하여
	//                   오른쪽에 위치한 변수에 값 저장

	// std::cin : 입력하기 위한 객체

	std::cin >> value;

	std::cout << "value 변수의 값 : " << value << std::endl;

	std::cout << "두번째 안녕하세요.";
	*/

	// bool = 참과 거짓을 나타내는 자료형
	//bool value = true;

	// 범위 기반 for문
	/*
	// 시작과 끝점을 알려주지 않아도 데이터 크기에 따라 끝까지 순회해주는 반복문

	int array [] = { 1, 2, 3, 4, 5 };

	// element : 변수 이름
	// array : 데이터 리스트 (배열, 벡터, 리스트)
	for (int element : array)
	{	
		// 범위 기반 for문 단점
		// 1. for문 내 index 정보 존재 X
		// 2. for문 내 배열의 요소 변경 X

		// 값을 지정된 형태로 증가시키는 것 가능
		// element += 1;
		
		// 배열 안 값 전체 초기화 가능
		// element = 10;

		element = 10;

		// element : call by value 형태로 값 넘겨줌
		std::cout << element << std::endl;
	}

	std::cout << "--------" << std::endl;

	for (int element : array)
	{
		std::cout << element << std::endl;
	}
	*/

	// 자료형 추론
	/*
	// 변수나 함수를 선언하고 연산이 이루어질 때
	// 컴파일러가 자동으로 자료형을 추론

	// 자료형 추론은 변수를 초기화하지 않으면 사용 X

	auto value = 10;
	auto decimal = 20.6;

	std::cout << "value 변수의 값 : " << value << std::endl;
	*/

	// 클래스
	Player kim;

	//kim.health = 100;
	//kim.size = 10.56;
	//kim.name = "Kim";

	std::cout << kim.health << " " << kim.height << " " << kim.name << std::endl;

	return 0;
}