#include <iostream>	// ����� ��Ʈ��
#include <memory>

using namespace std;

// ����Ʈ ������
/*
// ������ó�� �����ϴ� Ŭ���� ���ø�
// ����� ���� �޸� �ڵ� ����
*/

/*
class Person
{
public:
	// shared_ptr ������ ��� ��ȯ ���� �߻�
	// weak_ptr ������ ��� ��ȯ ���� ����
	weak_ptr<Person> person;

	Person()
	{
		cout << "����" << endl;
	}

	~Person()
	{
		cout << "�Ҹ�" << endl;
	}
};

class Player
{
public:
	Player()
	{
		cout << "Player ����" << endl;
	}

	~Player()
	{
		cout << "Player �Ҹ�" << endl;
	}
};
*/

int main()
{
	// shared_ptr ������
	/*
	// �ϳ��� ��ü�� �����ϴ� ����Ʈ ������ ���� ����
	// �����ϰ� �ִ� ����Ʈ ������ ���� -> reference count

	// ���� ī��Ʈ (reference count)
	// �ش� �޸𸮸� �����ϴ� �����Ͱ� � �ִ��� ��Ÿ���� ��
	// �����ϴ� �����Ͱ� �߰��Ǹ� 1�� ����, �������� 1�� ����

	// ù��° �ʱ�ȭ�ϴ� ���
	// shared_ptr<int> ptr1(new int(5));
	// �ι�° �ʱ�ȭ�ϴ� ���
	// shared_ptr<int> ptr1 = make_shared<int>(5);

	// shared_ptr���� ���� ī��Ʈ Ȯ�� ���
	// ptr1.use_count()

	shared_ptr<Player> ptr1(new Player());

	cout << "ptr1 ���� ī��Ʈ : " << ptr1.use_count() << endl;

	shared_ptr<Player> ptr2 = ptr1;

	cout << "ptr1 ���� ī��Ʈ : " << ptr2.use_count() << endl;
	*/

	// unique_ptr ������
	/*
	// �ϳ��� ����Ʈ ������ ����Ŵ
	// shared_ptr ���� ī��Ʈ 1 �̻� X

	unique_ptr<Player> ptr1(new Player());

	// ptr1�� ������ �ִ� �޸� ������(���� �Ҵ��� �޸�)��
	// ptr2���� �ѱ�

	unique_ptr<Player> ptr2 = move(ptr1);

	// reset : �޸� ���� ���� �Լ�
	ptr2.reset();

	// unique_ptr<int> ptr3 = ptr1;	ERROR
	*/

	// weak_ptr ������
	/*
	// �ϳ� �̻��� shared_ptr �ν��Ͻ��� �����ϴ� ��ü�� ���� ���� ����
	// ������ ���� ī��Ʈ�� ���Ե��� �ʴ� ����Ʈ ������

	// ���ΰ� ��븦 ����Ű�� shared_ptr ������ �ִٸ�
	// ���� Ƚ�� 1���Ϸ� X
	// shared_ptr�� ���� ���� �ʴ� ���� �߻�

	// ��ȯ ����
	// ���� ��븦 ����

	// shared_ptr�� �ν��Ͻ� ���� ��ȯ ���� ���� ���� ���

	shared_ptr<Person> obj1(new Person());
	shared_ptr<Person> obj2(new Person());

	cout << "obj1 ���� ī��Ʈ : " << obj1.use_count() << endl;
	cout << "obj2 ���� ī��Ʈ : " << obj2.use_count() << endl;

	obj1->person = obj2;
	obj2->person = obj1;
	*/

	return 0;
}