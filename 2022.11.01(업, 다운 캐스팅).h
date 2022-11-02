#include <iostream>	// 입출력 스트림

using namespace std;

// 업 캐스팅
	// 하위 클래스가 상위 클래스로 암묵적 형변환

	// 상위 클래스 타입의 포인터, 하위 클래스 가리킬 수 있음
class Parent
{
public:
	int x = 10;
	int y = 200;
};

class Child : public Parent
{
public:
	int z = 99;
};

// 클래스 정보 검색
void Search(Parent** ptr)
{
	for (int i = 0; i < 5; i++)
	{
		cout << "클래스 x의 값 : " << ptr[i]->x << endl;
		cout << "클래스 y의 값 : " << ptr[i]->y << endl;
	}
}

int main()
{
	// 업 캐스팅
	/*
	Parent* parentPtr = new Child();
	parentPtr->x = 10;
	parentPtr->y = 20;
	static_cast<Child*>(parentPtr)->z = 20;


	Parent** ptr1 = new Parent* [5];

	for (int i = 0; i < 5; i++)
	{
		ptr1[i] = new Child();
	}

	Search(ptr1);

	delete[] ptr1;
	*/

	// 다운 캐스팅
	/*
	// 상속관계에서 업 캐스팅했던 상위 클래스 인스턴스가
	// 하위 클래스로 형변환

	// 하위 클래스 포인터로 부모 클래스 접근 X
	Child* childPtr = (Child*)new Parent();
	childPtr->x = 10;
	childPtr->y = 20;
	childPtr->z = 30;
	*/
	return 0;
}