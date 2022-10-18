#include "Monster.h"

// Monster 클래스 구현부
void Monster::Attack(int power)
{
	// 클래스의 멤버 변수와 매개변수의 이름이 같을때 구분
	this->power = power;

	std::cout << this << "객체가 " << this->power << "만큼 공격" << std::endl;
}
