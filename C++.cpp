#include <iostream>	// 입출력 스트림
#include <memory>

using namespace std;

// 스마트 포인터
/*
// 포인터처럼 동작하는 클래스 탬플릿
// 사용이 끝난 메모리 자동 해제
*/

/*
class Person
{
public:
	// shared_ptr 선언할 경우 순환 참조 발생
	// weak_ptr 선언할 경우 순환 참조 에방
	weak_ptr<Person> person;

	Person()
	{
		cout << "생성" << endl;
	}

	~Person()
	{
		cout << "소멸" << endl;
	}
};

class Player
{
public:
	Player()
	{
		cout << "Player 생성" << endl;
	}

	~Player()
	{
		cout << "Player 소멸" << endl;
	}
};
*/

int main()
{
	// shared_ptr 포인터
	/*
	// 하나의 객체를 참조하는 스마트 포인터 개수 참조
	// 참조하고 있는 스마트 포인터 개수 -> reference count

	// 참조 카운트 (reference count)
	// 해당 메모리를 참조하는 포인터가 몇개 있는지 나타내는 값
	// 참조하는 포인터가 추가되면 1씩 증가, 끊어지면 1씩 감소

	// 첫번째 초기화하는 방법
	// shared_ptr<int> ptr1(new int(5));
	// 두번째 초기화하는 방법
	// shared_ptr<int> ptr1 = make_shared<int>(5);

	// shared_ptr에서 참조 카운트 확인 방법
	// ptr1.use_count()

	shared_ptr<Player> ptr1(new Player());

	cout << "ptr1 참조 카운트 : " << ptr1.use_count() << endl;

	shared_ptr<Player> ptr2 = ptr1;

	cout << "ptr1 참조 카운트 : " << ptr2.use_count() << endl;
	*/

	// unique_ptr 포인터
	/*
	// 하나의 스마트 포인터 가리킴
	// shared_ptr 참조 카운트 1 이상 X

	unique_ptr<Player> ptr1(new Player());

	// ptr1이 가지고 있던 메모리 소유권(동적 할당한 메모리)을
	// ptr2에게 넘김

	unique_ptr<Player> ptr2 = move(ptr1);

	// reset : 메모리 영역 삭제 함수
	ptr2.reset();

	// unique_ptr<int> ptr3 = ptr1;	ERROR
	*/

	// weak_ptr 포인터
	/*
	// 하나 이상의 shared_ptr 인스턴스가 소유하는 객체에 대한 접근 제공
	// 하지만 참조 카운트에 포함되지 않는 스마트 포인터

	// 서로가 상대를 가리키는 shared_ptr 가지고 있다면
	// 참조 횟수 1이하로 X
	// shared_ptr이 해제 되지 않는 문제 발생

	// 순환 참조
	// 서로 상대를 참조

	// shared_ptr의 인스턴스 사이 순환 참조 제거 위해 사용

	shared_ptr<Person> obj1(new Person());
	shared_ptr<Person> obj2(new Person());

	cout << "obj1 참조 카운트 : " << obj1.use_count() << endl;
	cout << "obj2 참조 카운트 : " << obj2.use_count() << endl;

	obj1->person = obj2;
	obj2->person = obj1;
	*/

	return 0;
}