#include <iostream>	// ����� ��Ʈ��

using namespace std;

// ���� ����
/*
// ���� ���� �ƴ� �ν��Ͻ��� ���� �����Ͽ� ���� �� ����

class Object
{
// �Ӽ�
private:
	// m(���)_���� �̸�
	int m_position;
	float m_size;
	int* m_memory;

public:
	// �����ڴ� public
	Object(int position, float size)
	{
		m_position = position;
		m_size = size;

		m_memory = new int(10);

		cout << "memory �� : " << *m_memory << endl;
		cout << "position �� : " << m_position << endl;
		cout << "size �� : " << m_size << endl;
	}

	// ���� ������
	// ���� Ŭ������ ��ü�κ��� '����'�ؼ� ���ο� ��ü ����

	// ���� �����ڿ� �μ��� &(���۷���) �޴� ����
	// ���ο� ��ü ������ �� ������� ���� ����

	// const : ����� ������ ��ȣ ���� ���ȭ
	Object(const Object& copyObject)
	{
		m_memory = new int(*copyObject.m_memory);
		m_position = copyObject.m_position;
		m_size = copyObject.m_size;

		cout << "memory �� : " << *m_memory << endl;
		cout << "position �� : " << m_position << endl;
		cout << "size �� : " << m_size << endl;
	}

	// ��ü �Ҹ�� �� ���� �Ҵ��� �޸� ���� ����
	~Object()
	{
		delete m_memory;
	}
};
*/

// �⺻ ������
// ���α׷��Ӱ� ������ �����ڰ� ���� ���
// �����Ϸ��� �ڵ� ����

class Book
{
public:
	int page;
	string name;

	// �⺻ �������� ��� �����ڰ� �ϳ��� ����Ǿ� �ִٸ�
	// �⺻ ������ �ڵ� ���� X
	// Book() {}; <- �����ڰ� ���� �⺻ ������ ����

	Book()
	{
		cout << "������ ȣ��" << endl;
	}
};

class Cover : Book
{

};

int main()
{
	// ���� ����
	/*
	// ���� �����ϴµ� �ν��Ͻ��� �޸𸮿� ���� �������� �ʴ� ����
	// �� ��ü�� �����ϴ� ���� �ƴ϶� �ּ� ���� �����Ͽ� ���� �޸� ����Ŵ

	int* a = new int(10);	// ���� �޸� ���� �Ҵ�
	int* b = new int(20);

	cout << "a�� �� : " << *a << endl;
	cout << "b�� �� : " << *b << endl;

	// ���� ���� �߻�
	a = b;

	*b = 100;

	cout << "a�� �� : " << *a << endl;
	cout << "b�� �� : " << *b << endl;

	delete a;
	//delete b;
	

	// �����ڿ� �Ű������� �ִٸ� Ŭ������ �ν��Ͻ�(�޸� �Ҵ�)�� ��
	// Ŭ������ �μ��� �־�� ��

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