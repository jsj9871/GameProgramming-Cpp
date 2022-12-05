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

	// 방금 생성한 새로운 노드의 주소가 반환
	struct Node* newNode = CreateNode(key, value);

	Bucket* hash = new Bucket[5];

	// 버켓(hash) 인덱스 size가 0 이라면
	if (hash[hashIndex].size == 0)
	{
		// 사이즈 값 증가
		hash[hashIndex].size++;

		// head 포인터를 새로 처음 들어온 NewNode 가리키도록
		hash[hashIndex].head = newNode;
	}
	else
	{

	}
}

int main()
{
	// 해시 테이블
	// 해시 함수를 사용해서 변환한 값을 index로 삼아서
	// key와 value 저장하는 자료구조

	Bucket * hash = new Bucket[5];
	
	return 0;
}