#pragma once
#include <string>

class Character
{
public:
	Character();
	virtual~Character();

	int hp;
	int x;
	int y;

	void move();

};