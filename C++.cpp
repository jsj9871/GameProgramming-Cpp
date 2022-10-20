#include <iostream>	// 입출력 스트림

using namespace std;

// 깊은 복사
/*
// 참조 값이 아닌 인스턴스를 새로 복사하여 실제 값 복사

class Object
{
// 속성
private:
	// m(멤버)_변수 이름
	int m_position;
	float m_size;
	int* m_memory;

public:
	// 생성자는 public
	Object(int position, float size)
	{
		m_position = position;
		m_size = size;

		m_memory = new int(10);

		cout << "memory 값 : " << *m_memory << endl;
		cout << "position 값 : " << m_position << endl;
		cout << "size 값 : " << m_size << endl;
	}

	// 복사 생성자
	// 같은 클래스의 객체로부터 '복사'해서 새로운 객체 생성

	// 복사 생성자에 인수로 &(레퍼런스) 받는 이유
	// 새로운 객체 생성할 때 오버헤드 방지 위해

	// const : 복사된 데이터 보호 위해 상수화
	Object(const Object& copyObject)
	{
		m_memory = new int(*copyObject.m_memory);
		m_position = copyObject.m_position;
		m_size = copyObject.m_size;

		cout << "memory 값 : " << *m_memory << endl;
		cout << "position 값 : " << m_position << endl;
		cout << "size 값 : " << m_size << endl;
	}

	// 객체 소멸될 때 동적 할당한 메모리 공간 해제
	~Object()
	{
		delete m_memory;
	}
};
*/

// 기본 생성자
// 프로그래머가 정의한 생성자가 없는 경우
// 컴파일러가 자동 생성

class Book
{
public:
	int page;
	string name;

	// 기본 생성자의 경우 생성자가 하나라도 선언되어 있다면
	// 기본 생성자 자동 생성 X
	// Book() {}; <- 생성자가 없는 기본 생성자 생성

	Book()
	{
		cout << "생성자 호출" << endl;
	}
};

class Cover : Book
{

};

int main()
{
	// 얕은 복사
	/*
	// 값을 복사하는데 인스턴스가 메모리에 새로 생성되지 않는 형태
	// 값 자체를 복사하는 것이 아니라 주소 값을 복사하여 같은 메모리 가리킴

	int* a = new int(10);	// 동적 메모리 공간 할당
	int* b = new int(20);

	cout << "a의 값 : " << *a << endl;
	cout << "b의 값 : " << *b << endl;

	// 얕은 복사 발생
	a = b;

	*b = 100;

	cout << "a의 값 : " << *a << endl;
	cout << "b의 값 : " << *b << endl;

	delete a;
	//delete b;
	

	// 생성자에 매개변수가 있다면 클래스를 인스턴스(메모리 할당)할 때
	// 클래스에 인수를 넣어야 함

	Object cat1(10, 5.5);

	Object cat2 = cat1;

	
	int a = 10;
	int b = 20;
	int c = 30;

	// 0 1 2
	int array[3] = {a, b, c};

	array[0] = 100;
	cout << array[0] << endl;
	cout << a << endl;
	*/

	Book book1;

	Cover cover;

	return 0;
}