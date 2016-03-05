
#include "Main.h"


void Main()
{
	//ウィンドウサイズを幅640*480に指定
	Window::Resize(640, 480);

	MAP map; 
	Player player;

	TextureInit();
	player.PlayerInit();
	GameState = GAME_STATE_TITLE;
	NameState = NAME_INPUT;

	while (System::Update())	
	{
		switch (GameState)
		{
		case GAME_STATE_TITLE:
			if (Input::KeyLeft.clicked) {
				GameState = GAME_STATE_NAME;
				break;
			}
		case GAME_STATE_NAME:
			switch (NameState)
			{
			case NAME_INPUT:
				player.Get_Name();
				if (Input::KeyEnter.clicked)
				{
					NameState = NAME_CHECK;
					break;
				}
			case NAME_CHECK:
				player.Check_Name();
				if (Input::KeyY.clicked) GameState = GAME_STATE_MAIN;
				if (Input::KeyN.clicked) NameState = NAME_INPUT;
			}
		case GAME_STATE_MAIN:
			map.MapInit(); //ここに書かないとちゃんと動かない。なんで？
			map.MapUpdata();
			map.MapDraw();
			player.PlayerUpdata();
			player.PlayerDraw();
            break;
		case GAME_STATE_GAMEOVER: break;
		case GAME_STATE_ENDING: break;
		}
	}
}
