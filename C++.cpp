#include <iostream>	// ����� ��Ʈ��
#include <deque>
#include <set>
#include <stack>

using namespace std;


int main()
{
	// STL
	/*
	// ���� �����̳� Map, Set
	// ���� �����̳� list, vector, deque
	// �����̳� ����� stack, queue
	*/

	// deque
	/*
	// �����Ͱ� ������ ��ġ�� ������ ��ġ�� ���� ��
	// �����Ͱ� ������ ��ġ�� ������ ��ġ�� ���� �տ� �ִ� ���� �����̳�

	deque<int> dequeData;

	dequeData.push_back(1);
	dequeData.push_back(2);
	dequeData.push_front(10);
	dequeData.push_back(3);
	dequeData.push_back(4);

	// insert : ���� �����ϰ��� �ϴ� ��ġ, �ش� ��ġ �� ��
	dequeData.insert(dequeData.begin() + 2, 500);

	// erase : ���� �����ϰ� ���� ������ ��ġ
	dequeData.erase(dequeData.begin());

	for (int i = 0; i < dequeData.size(); i++)
	{
		cout << dequeData.at(i) << endl;

		// [] �ε��� ���� ����� ���ɻ� ����
		cout << dequeData[i] << endl;
	}
	*/

	// multi_set
	/*
	// set�� �ٸ��� �ߺ��� ���Ҹ� �����̳ʿ� ����
	multiset<int>mSet;
	mSet.insert(4);
	mSet.insert(1);
	mSet.insert(2);
	mSet.insert(3);
	mSet.insert(6);
	mSet.insert(7);
	mSet.insert(5);
	mSet.insert(7);

	for (auto iter = mSet.begin(); iter != mSet.end(); iter++)
	{
		cout << *iter << endl;
	}

	// mSet.count(?) : ���� �����̳ʿ� ?��� ���� �� �� �����ϴ��� ���
	cout << "mSet�� 7�̶�� ���� ���� �� �� �����ϳ���? : " << mSet.count(7) << endl;

	// 4�� ó������ ���� �κ��� ����ϱ��?
	multiset<int>::iterator start;

	start = mSet.lower_bound(4);
	cout << "4�� ó������ ���� �κ� : " << *start << endl;
	*/

	// Node (struct)

	// stack, queue
	stack<int> Stack;

	return 0;
}