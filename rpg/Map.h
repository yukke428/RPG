
#pragma once

#include "Main.h"


#define MAP_WIDTH 32 //�}�b�v�`�b�v�̕�
#define MAP_HEIGHT 32 //�}�b�v�`�b�v�̍���
#define SIZE_X 20
#define SIZE_Y 15

class MAP
{
private:
	int timer;
    int maps[15][20]; //��ʂɕ\������Ă���}�b�v�̃}�b�v�`�b�v���i�[
	int drawx[SIZE_X], drawy[SIZE_Y];

	bool flag_right, flag_left, flag_up, flag_down;

	CSVReader map1;

public:
	void MapInit();
	void MapUpdata();
	void MapDraw();
};