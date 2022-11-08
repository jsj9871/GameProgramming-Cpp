#include <iostream>	// ����� ��Ʈ��
#include <map>
#include <set>

using namespace std;

int main()
{
	// STL vector, list // ���� �����̳�
	// STL stackm, queue // �����̳� �����
	// STL map, set // ���� �����̳�

	// MAP
	/*
	// ����Ʈ�� �迭ó�� ���������� ��� ���� ������ �ʰ�
	// Key ���� ���ؼ� value ���� ����
	map<string, int> mapData;
	mapData.insert({ "��", 1000 });
	mapData.insert({ "��", 4000 });
	mapData.insert({ "��", 2500 });

	// (value)���� �ߺ��� �� ������, key ���� ������ ������ �ߺ� X

	for (auto iter = mapData.begin();
		iter != mapData.end(); iter++)
	{
		// KEY : iter->first�� ����
		// VALUE : iter->second�� ����
		cout << "kEY : " << iter->first << "VALUE : " << iter->second << endl;

	}

	// MAP Ű ���� �������� ����, ������������ ����
	// ù��° �ּҸ� ����Ű�� itherator�� mapData.end()���� ��ȭ�ϸ鼭
	// "�Ź�" �̶�� key ���� �ִٸ� ���ǹ� ����

	if (mapData.find("�Ź�") != mapData.end())
	{
		cout << "���� KEY ���� ����" << endl;
	}
	else
	{
		cout << "���� KEY ���� �������� ����" << endl;
	}

	// �ߺ��� Ű ���� �����ϴ� ����
	// MAP�� �ߺ��� KEY ���� ��� X
	mapData.insert("��", 3000);
	// VALUE�� �ߺ� �� mapData�� Insert ���
	mapData.insert({ "����", 1000 });
	// mapData�� �ִ� �����͸� �����Ϸ��� erase�� Ű ���� �Է�
	mapData.erase("��");
	for (auto iter = mapData.begin(); iter != mapData.end(); iter++)
	{
		// KEY : iter->first�� �����ؾ� �մϴ�.
		// VALUE : ither->second�� �������ּž� �մϴ�.
		cout << "KEY : " << iter->first << " VALUE : " << iter->second << endl;
	}
	*/

	// SET
	// Ű �����θ� ���ҵ��� �������� �̷���� �����̳�
	// SET �ڷᱸ���� Ű���� �ߺ��� ��� X
	set<int> setData;

	setData.insert(10);
	setData.insert(20);
	setData.insert(30);
	setData.insert(40);
	setData.insert(50);
	setData.insert(60);

	for (auto iter = setData.begin(); iter != setData.end(); iter++)
	{
		cout << *iter << endl;
	}

	// ���� �ߺ��Ǿ�����, �ȵǾ����� �Ǵ�
	// �ߺ��� ���� ���� ������ ���� SET �ڷᱸ���� ����
	pair<set<int>::iterator, bool> check = setData.insert(15);

	if (check.second)
	{
		cout << "���� �Ϸ�" << endl;
	}
	else
	{
		cout << "���� ���� (�ߺ��� ���� ����)" << endl;
	}

	return 0;
}