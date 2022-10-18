#pragma once
#include <string>
#include <iostream>

// Monster 클래스 선언부
// 클래스 cpp, h는 같은 내부 클래스
class Monster
{
public:
	int health;
	std::string name;
	int power;

	// this 포인터
	// 객체 자신을 가리키는 포인터

	void Attack(int power);	// 함수 선언
};
