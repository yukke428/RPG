
#pragma once

#include "Main.h"


#define MAP_WIDTH 32 //マップチップの幅
#define MAP_HEIGHT 32 //マップチップの高さ
#define SIZE_X 20
#define SIZE_Y 15

class MAP
{
private:
	int timer;
    int maps[15][20]; //画面に表示されているマップのマップチップを格納
	int drawx[SIZE_X], drawy[SIZE_Y];

	bool flag_right, flag_left, flag_up, flag_down;

	CSVReader map1;

public:
	void MapInit();
	void MapUpdata();
	void MapDraw();
};