#pragma once
#include <string>
#include <iostream>

// Monster Ŭ���� �����
// Ŭ���� cpp, h�� ���� ���� Ŭ����
class Monster
{
public:
	int health;
	std::string name;
	int power;

	// this ������
	// ��ü �ڽ��� ����Ű�� ������

	void Attack(int power);	// �Լ� ����
};
