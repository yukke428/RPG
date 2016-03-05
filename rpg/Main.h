
#pragma once

#include "Character.h"
#include "Map.h"

//シーン遷移
enum GameState_t {
	GAME_STATE_TITLE,        //タイトル画面
	GAME_STATE_NAME,        //名前入力
	GAME_STATE_MAIN,        //ゲーム本編
	GAME_STATE_GAMEOVER,    //ゲームオーバー
	GAME_STATE_ENDING,        //エンディング
};

//名前入力用
enum NameState_t{
	NAME_INPUT, //名前入力
	NAME_CHECK, //名前確認
};

GameState_t GameState;
NameState_t NameState;