
#pragma once

#include "Character.h"
#include "Map.h"

//�V�[���J��
enum GameState_t {
	GAME_STATE_TITLE,        //�^�C�g�����
	GAME_STATE_NAME,        //���O����
	GAME_STATE_MAIN,        //�Q�[���{��
	GAME_STATE_GAMEOVER,    //�Q�[���I�[�o�[
	GAME_STATE_ENDING,        //�G���f�B���O
};

//���O���͗p
enum NameState_t{
	NAME_INPUT, //���O����
	NAME_CHECK, //���O�m�F
};

GameState_t GameState;
NameState_t NameState;