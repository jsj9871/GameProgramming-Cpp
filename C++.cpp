#include <iostream>

using namespace std;

struct Node
{
	int Key;
	int value;
	Node* next;
};

struct Bucket
{
	Node* head;
	int size;
};

struct Bucket* hash;

Node* CreateNode(int key, int value)
{
	Node* newNode = new Node;
	newNode->Key = key;
	newNode->value = value;
	newNode->next = NULL;

	return newNode;
}

int HashFunction(int key)
{
	return key % 5;
}

void Insert(int key, int value)
{
	//      0           10 % 5
	int hashIndex = HashFunction(key);

	// ��� ������ ���ο� ����� �ּҰ� ��ȯ
	struct Node* newNode = CreateNode(key, value);

	Bucket* hash = new Bucket[5];

	// ����(hash) �ε��� size�� 0 �̶��
	if (hash[hashIndex].size == 0)
	{
		// ������ �� ����
		hash[hashIndex].size++;

		// head �����͸� ���� ó�� ���� NewNode ����Ű����
		hash[hashIndex].head = newNode;
	}
	else
	{

	}
}

int main()
{
	// �ؽ� ���̺�
	// �ؽ� �Լ��� ����ؼ� ��ȯ�� ���� index�� ��Ƽ�
	// key�� value �����ϴ� �ڷᱸ��

	Bucket * hash = new Bucket[5];
	
	return 0;
}