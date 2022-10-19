#include <iostream>	// 입출력 스트림

using namespace std;

// 래퍼런스 연산자
/*
// 포인터를 이용하여 메모리 연산 허용 X

// 참조자 사용하는 이유
// 
void Function(int & x)
{
	x = 100;
}
*/

// 인라인 함수
// 함수를 호출하는 대신 함수가 호출되는 위치마다
// 함수의 코드를 복사하여 전달하는 방식

// 매크로 함수 vs 인라인 함수
// 매크로 함수 : 전처리기에서 처리
// 인라인 함수 : 컴파일시점에 처리

// 객체지향 프로그래밍
// 여러 개의 객체들끼리 상호작용 통해 로직 구성

inline void Function()
{
	cout << "공격" << endl;
}

int main()
{
	// 참조자
	/*
	// 자신이 참조하는 변수를 대신할 수 있는 또 하나의 이름

	// 하나의 메모리 공간에 2개의 이름 존재
	int a = 10;
	int& tvalue = a;
	int& ref = tvalue;

	// 참조자는 초기화 필수, NULL X
	// int& va = NULL;

	Function(a);

	cout << a << endl;
	*/

	/*
	cout << "a의 값 : " << a << endl;
	cout << "tvalue의 값 : " << tvalue << endl;

	ref = 30;

	cout << "a의 값 : " << a << endl;
	cout << "tvalue의 값 : " << tvalue << endl;
	*/

	// 인라인 함수
	/*
	// 함수 내에 있는 내용이 간단할 때 사용
	
	// 함수가 여러 번 호출되는 함수일 경우
	// 인라인 함수를 사용하면 컴파일 크기 커짐
	Function();
	*/

	// 캡슐화
	/*
	// 클래스의 속성(변수)과 기능(함수)를 하나로 묶어
	// 실제 구현 내용의 일부를 내부에 감춰 은닉

	class CellPhone
	{
	private:
		int brightness;
		int volume;

		bool power;

	public:
		// 값 접근 함수 : Setter
		// 값 읽는 함수 : Getter

		
		void SoundVolume(int volumeValue)
		{
			if (volumeValue > 100)
			{
				volumeValue = 100;
			}
			else if (volumeValue < 0)
			{
				volumeValue = 0;
			}

			volume = volumeValue;

			cout << volume << endl;
		}
		

		// Setter()
		void SetVolume(int x)
		{
			volume = x;
		}

		// Getter()
		int GetVolume()
		{
			return volume;
		}
	
	};
	*/
	/*
	CellPhone iPhone;
	iPhone.SetVolume(10);

	cout << iPhone.GetVolume() << endl;
	return 0;
	*/
}