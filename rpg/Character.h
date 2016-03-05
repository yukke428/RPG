
#pragma once

#include "Resources.h"

class Player
{
private:
	int timer;

	int x, y; //�v���C���[�̍��W
	int hp, mp; //���݂�HP��MP
	int direction; //�ǂ���������Ă��邩 0=�E�A1=���A2=��A3=��
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