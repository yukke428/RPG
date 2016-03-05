
#include "Textures.h"

void TextureInit()
{
	//マップ
	TextureAsset::Register(L"map1", L"Pictures/map1.png");

	//キャラクター
	TextureAsset::Register(L"soldier", L"Pictures/soldier.png");
}