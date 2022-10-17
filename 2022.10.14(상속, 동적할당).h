#include <iostream>	// 입출력 스트림

// 상속
// 기존에 정의되어 있는 상위 클래스의 모든 멤버 변수, 함수를 물려받아
// 하위 클래스가 사용할 수 있는 것

// 상위 클래스 : 상속을 물려주는 클래스
// 하위 클래스 : 상속을 물려받는 클래스

class Phone
{
public:
	// 생성자는 자신의 클래스 이름 (반환형 X)
	Phone()
	{
		std::cout << "휴대폰이 생성되었습니다." << std::endl;
	}

	// 소멸자는 자신의 클래스 이름 앞에 ~ 사용
	~Phone()
	{
		std::cout << "핸드폰이 파괴되었습니다." << std::endl;
	}

	std::string name;

	void Message()
	{
		std::cout << "문자 보내기" << std::endl;

		// 상위 클래스는 하위 클래스에서 정의한 함수 사용 X
		// Touch();
	}

protected:
	void Call()
	{
		std::cout << "전화 걸기" << std::endl;
	}
};

// 상속하는 방법
// (하위)클래스 : (ex : Phone) <- 상위 클래스 이름
class SmartPhone : Phone
{
public:
	void Touch()
	{
		Call();
	}
};

int main()
{
	// C++ 동적 할당
	/*
	// new > (힙 영역에 할당할 메모리 공간 크기)
	int* ptr = new int;

	*ptr = 100;

	std::cout << *ptr << std::endl;
	std::cout << ptr << std::endl;

	// delete : new로 동적 할당한 메모리 공간 해제
	delete ptr;


	int* arrptr = new int[5];

	// 4byte * 5 = 20 byte
	// [0] [1] [2] [3] [4]

	arrptr[0] = 20;
	arrptr[1] = 30;
	arrptr[2] = 40;
	arrptr[3] = 50;
	arrptr[4] = 60;

	for (int i = 0; i < 5; i++)
	{
		std::cout << arrptr[i] << std::endl;
	}

	delete [] arrptr;
	*/

	//Phone phone;	// <- 스택

	Phone* phone = new Phone();	// <- 힙

	delete phone;
	//SmartPhone* sPhone = new SmartPhone();

	// 정적 바인딩
	// 배열 크기는 컴파일 시점에 메모리 크기 결정
	// 배열 [100]; <- 80 ~ 90개 메모리 공간 낭비

	// 특정 시점에 배열 크기 100개 사용해야되지만,
	// 그 특정 시점이 넘어가면 더이상 사용할 필요 없을 때

	// 동적 할당은 실행 시간에 메모리 공간 확보, 줄이고 가능

	//phone->Message();
	//sPhone->Touch();

	// 생성자
	// 클래스의 객체가 생성되었을 때 객체 초기화 목적으로 자동 호출되는 함수

	// 소멸자
	// 클래스의 객체가 소멸되었을때 자동 호출되는 함수

	return 0;
}