#include <iostream>	// ����� ��Ʈ��
#include <conio.h>
#include <windows.h>
#include <ctime>
#include <vector>

using namespace std;

int main()
{
	// std::string
#pragma region ���ڿ�

	/*
	string name = "JoungSeongJin";
	string * name1 = new string(name);

	cout << "name ������ �� : " << name << endl;
	cout << "name1 ������ �� : " << *name1 << endl;

	// append : string ��ü�� ���� ���� �ִ� �޸𸮿� ������ �߰�
	name.append("1");

	delete name1;

	// �� �̻� �ƹ� ��ġ ���� X
	if (name1 == nullptr)
	{
		name1 = new string("�ȳ��ϼ���");
	}

	cout << "name ������ �� : " << name << endl;
	cout << "name1 ������ �� : " << *name1 << endl;
	*/

#pragma endregion

	// ���� 1 byte
	// �ѱ� 2 byte
	// Ư����ȣ 3 byte
	vector<string> data = {"��", "��", "��", "��", "��"};

	// vector ���� ������� true ��ȯ
	// vector ���� ������ false ��ȯ

	// resize : vector �޸� ũ�� ����
	//data.resize(10);

	data.push_back("a");

	// size()
	// ���� ������ ���� ��ȯ
	cout << data.size() << endl;

	// capacity()
	// �Ҵ�� �޸� ���� ũ�� ��ȯ
	// ���� �Ҵ� ���� ���� Ŀ���鼭 �Ҵ�
	// ���� �޸��� 1.5�� ����
	// push_back ���� ���� �Ҵ��ϰ� �Ǹ� ��ȿ����
	// �̸� ���صи�ŭ �� ���� ���� �Ҵ�
	cout << data.capacity() << endl;
	/*
	while (!data.empty())
	{
		if (GetAsyncKeyState(VK_SPACE))
		{
			data.pop_back();
		}

		// [0]  [1]  [2]  [3]
		// "��", "��", "��", "��"
		for (string element : data)
		{
			cout << element << " ";
		}

		Sleep(500);	// 0.5�� ���
		system("cls");
	}
	*/
	return 0;
}