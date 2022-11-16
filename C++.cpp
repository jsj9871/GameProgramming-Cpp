#include <iostream>	// 입출력 스트림

using namespace std;

// 클래스의 메모리 구조
class Object
{
// 클래스 오프셋
// 동일한 오브젝트 안에 오브젝트 처음부터 주어진 요소나 지점까지의 변위차를
// 정수형으로 나타내는 값

// ex) A[6] = "ABCDE";ㄴ
// C는 A 시작점에서 2의 오프셋을 가지는 값

public:
	char charData;	// 1 byte
	int intData;	// 4 byte
	double doubleData;	// 8 byte

	// static 변수는 클래스 내부에 메모리가 잡히지 않음
	static int staticData;	// 4 byte

	void StaticDataFunction()
	{
		staticData++;
	}
};

// 클래스 내부에 있는 static 변수는 클래스 외부에서
// 전역 변수처럼 초기화

int Object::staticData = 10;

int main()
{
	Object object1;
	Object object2;
	Object object3;

	object1.StaticDataFunction();

	cout << Object::staticData << endl;
	
	// 클래스의 메모리
	/*
	// 클래스 메모리 크기
	// 멤버 변수 중에서 가장 큰 자료형의 배수
	cout << "object 클래스의 크기 : " << sizeof(object) << endl;
	*/

	// 클래스의 오프셋
	/*
	cout << (int)(&(((Object*)0)->charData)) << endl;
	cout << (int)(&(((Object*)0)->doubleData)) << endl;
	cout << (int)(&(((Object*)0)->intData)) << endl;
	*/

	return 0;
}