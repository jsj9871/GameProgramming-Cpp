#include "Monster.h"

// Monster Ŭ���� ������
void Monster::Attack(int power)
{
	// Ŭ������ ��� ������ �Ű������� �̸��� ������ ����
	this->power = power;

	std::cout << this << "��ü�� " << this->power << "��ŭ ����" << std::endl;
}
