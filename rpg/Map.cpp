
#include "Map.h"

void MAP::MapInit()
{
	timer = 0;
	for (int y = 0; y < SIZE_Y; y++)
	{
		for (int x = 0; x < SIZE_X; x++)
		{
			maps[y][x] = map1.get<int>(y, x);
			
			drawx[x] = x * 32;
			drawy[y] = y * 32;
		}
	}
	flag_right = false;
	flag_left = false;
	flag_up = false;
	flag_down = false;

	map1 = CSVReader(L"Map/map1.csv");
	if (!map1) return;
}

void MAP::MapUpdata()
{
	timer++;

	if (Input::KeyRight.pressed) flag_right = true;
	if (Input::KeyLeft.pressed) flag_left = true;
	if (Input::KeyUp.pressed) flag_up = true;
	if (Input::KeyDown.pressed) flag_down = true;
	/*
	//âEÉLÅ[Ç™âüÇ≥ÇÍÇΩéû
	if (flag_right)
	{
		if (timer % 60 == 0)
		{
			for (int i = 0; i < SIZE_Y; i++)
			{
				for (int j = 0; j < SIZE_X; j++)
				{
					maps[i][j] = map1.get<int>(,)
				}
			}
		}
	}*/
}

void MAP::MapDraw()
{
	for (int y = 0; y < SIZE_Y; y++)
	{
		for (int x = 0; x < SIZE_X; x++)
		{
			if (maps[y][x] == 0)
			{
				TextureAsset(L"map1").uv(0, 0.34, 0.34, 0.34).draw(drawx[x], drawy[y]);
			}
			else if (maps[y][x] == 1)
			{
				TextureAsset(L"map1").uv(0, 0, 0.34, 0.34).draw(drawx[x], drawy[y]);
			}
			else if (maps[y][x] == 2)
			{
				TextureAsset(L"map1").uv(0.34, 0, 0.34, 0.34).draw(drawx[x], drawy[y]);
			}
			else if (maps[y][x] == 3)
			{
				TextureAsset(L"map1").uv(0.68, 0, 0.34, 0.34).draw(drawx[x], drawy[y]);
			}
		}
	}
}