#include <iostream>

using namespace std;

#define MEMORY 100

// �ִ� ��
/*
struct Node
{
	int data[MEMORY];
	int size = 0;
};
void Insert(Node * root, int value)
{
	int index;
	// ���� �����Ͱ� �� �� ���¶�� return
	if (root->size >= MEMORY - 1)
	{
		return;
	}
	root->size++;
	index = root->size;
	root->data[index] = value;
	// ����Ǵ� ����
	// 1. ��Ʈ ����� ��
	// 2. �θ� ����� ���� Ŭ ��
	//                   	// �θ� ��� 1(10)		�ڽ� ��� 2 20
	while ((index != 1) && (root->data[index/2] < root->data[index]))
	{
		swap(root->data[index / 2], root->data[index]);
		index = index / 2;
	}
}
int Remove(Node * root)
{
	int deleteValue = root->data[1];
	if (root->size == 0)
	{
		return 0;
	}
	root->data[1] = root->data[root->size];
	root->size--;
	int childNode;
	int currentNode = 1;
	while (currentNode * 2 <= root->size)
	{
		childNode = currentNode * 2;
		if (root->data[childNode] < root->data[childNode + 1])
		{
			childNode++;
		}
		if (root->data[childNode] < root->data[currentNode])
		{
			break;
		}
		swap(root->data[currentNode],root->data[childNode]);
		currentNode = childNode;
	}
	return deleteValue;
}
*/

int main()
{
	// ��
	/*
	// �ִ񰪰� �ּڰ��� ã�Ƴ��� ������
	// ������ �ϱ� ���� ��ȵ� ���� ���� Ʈ����
	// �⺻���� �� �ڷᱸ��
	Node heap;
	// 10
	// 20
	// 30
	Insert(&heap, 10);
	Insert(&heap, 20);
	Insert(&heap, 30);
	Insert(&heap, 40);
	Insert(&heap, 50);
	cout << Remove(&heap) << endl;
	//for (int i = 1; i <= 5; i++)
	//{
	//	cout << heap.data[i] << endl;
	//}
	*/

	return 0;
}