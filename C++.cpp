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

// 전위 순회
// 1. 자기 자신부터 출력
// 2. 왼쪽의 자식 노드 방문 출력
// 3. 오른쪽의 자식 노드 방문 출력

void Preorder(Node* root)
{
	if (root != NULL)
	{

	}
}

// 중위 순회
// 1. 왼쪽 자식 노드 출력
// 2. 자기 자신 노드 출력
// 3. 오른쪽 자식 노드 출력

// 후위 순회
// 1. 왼쪽 자식 노드 출력
// 2. 오른쪽 자식 노드 출력
// 3. 자기 자신 노드 출력

int main()
{
	

	// 트리 구조
	// 한 노드에서 시작해서 다른 정점들을 순회하여
	// 자기 자신에게 돌아오는 순환이 없는 연결 그래프

	// 이진 트리
	// 최대 2개의 자식 노드를 가지는 트리

	// n1 = 루트 생성(10, n2, n3)
	// n2 = 루트 생성()
	// n2 = 루트 생성()
	// n2 = 루트 생성()
	// n2 = 루트 생성()
	// n1 = 루트 생성()

	Node* newNode7 = CreateNode(7, NULL, NULL);
	Node* newNode6 = CreateNode(6, NULL, NULL);
	Node* newNode5 = CreateNode(5, NULL, NULL);
	Node* newNode4 = CreateNode(4, NULL, NULL);
	Node* newNode3 = CreateNode(3, newNode6, newNode7);
	Node* newNode2 = CreateNode(2, newNode4, newNode5);
	Node* newNode1 = CreateNode(1, newNode2, newNode3);



	return 0;
}