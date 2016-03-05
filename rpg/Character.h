
#pragma once

#include "Resources.h"

class Player
{
private:
	int timer;

	int x, y; //プレイヤーの座標
	int hp, mp; //現在のHPとMP
	int direction; //どちらを向いているか 0=右、1=左、2=上、3=下
	int level;
	int money;
	int exp;

	String name;

	Font font;

	bool flag_name;
public:
	void PlayerInit();
	void PlayerUpdata();
	void PlayerDraw();
	void Check_Name();
	void Get_Name();
};