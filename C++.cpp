#include <iostream>	// ����� ��Ʈ��

using namespace std;

// Ŭ������ �޸� ����
class Object
{
// Ŭ���� ������
// ������ ������Ʈ �ȿ� ������Ʈ ó������ �־��� ��ҳ� ���������� ��������
// ���������� ��Ÿ���� ��

// ex) A[6] = "ABCDE";��
// C�� A ���������� 2�� �������� ������ ��

public:
	char charData;	// 1 byte
	int intData;	// 4 byte
	double doubleData;	// 8 byte

	// static ������ Ŭ���� ���ο� �޸𸮰� ������ ����
	static int staticData;	// 4 byte

	void StaticDataFunction()
	{
		staticData++;
	}
};

// Ŭ���� ���ο� �ִ� static ������ Ŭ���� �ܺο���
// ���� ����ó�� �ʱ�ȭ

int Object::staticData = 10;

int main()
{
	Object object1;
	Object object2;
	Object object3;

	object1.StaticDataFunction();

	cout << Object::staticData << endl;
	
	// Ŭ������ �޸�
	/*
	// Ŭ���� �޸� ũ��
	// ��� ���� �߿��� ���� ū �ڷ����� ���
	cout << "object Ŭ������ ũ�� : " << sizeof(object) << endl;
	*/

	// Ŭ������ ������
	/*
	cout << (int)(&(((Object*)0)->charData)) << endl;
	cout << (int)(&(((Object*)0)->doubleData)) << endl;
	cout << (int)(&(((Object*)0)->intData)) << endl;
	*/

	return 0;
}