#include <iostream>

using namespace std;

struct Node
{
	int data;
	Node* left;
	Node* right;
};

Node* CreateNode(int value, Node* leftPtr, Node* rightPtr)
{
	Node* newNode = new Node;

	newNode->data= value;
	newNode->left = leftPtr;
	newNode->right = rightPtr;

	return newNode;
}

// ���� ��ȸ
// 1. �ڱ� �ڽź��� ���
// 2. ������ �ڽ� ��� �湮 ���
// 3. �������� �ڽ� ��� �湮 ���

void Preorder(Node* root)
{
	if (root != NULL)
	{

	}
}

// ���� ��ȸ
// 1. ���� �ڽ� ��� ���
// 2. �ڱ� �ڽ� ��� ���
// 3. ������ �ڽ� ��� ���

// ���� ��ȸ
// 1. ���� �ڽ� ��� ���
// 2. ������ �ڽ� ��� ���
// 3. �ڱ� �ڽ� ��� ���

int main()
{
	

	// Ʈ�� ����
	// �� ��忡�� �����ؼ� �ٸ� �������� ��ȸ�Ͽ�
	// �ڱ� �ڽſ��� ���ƿ��� ��ȯ�� ���� ���� �׷���

	// ���� Ʈ��
	// �ִ� 2���� �ڽ� ��带 ������ Ʈ��

	// n1 = ��Ʈ ����(10, n2, n3)
	// n2 = ��Ʈ ����()
	// n2 = ��Ʈ ����()
	// n2 = ��Ʈ ����()
	// n2 = ��Ʈ ����()
	// n1 = ��Ʈ ����()

	Node* newNode7 = CreateNode(7, NULL, NULL);
	Node* newNode6 = CreateNode(6, NULL, NULL);
	Node* newNode5 = CreateNode(5, NULL, NULL);
	Node* newNode4 = CreateNode(4, NULL, NULL);
	Node* newNode3 = CreateNode(3, newNode6, newNode7);
	Node* newNode2 = CreateNode(2, newNode4, newNode5);
	Node* newNode1 = CreateNode(1, newNode2, newNode3);



	return 0;
}