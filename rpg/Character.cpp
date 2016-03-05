
#include "Character.h"

void Player::PlayerInit()
{
	timer = 0;

	x = 320 - 32;
	y = 240 - 32;

	hp = 300;
	mp = 200;

	direction = 3;

	level = 1;
	money = 1000;
	exp = 0;
	
	font = Font(10);

	flag_name = false;
}

void Player::PlayerUpdata()
{
	timer++;

	if (Input::KeyRight.clicked) direction = 0;
	if (Input::KeyLeft.clicked) direction = 1;
	if (Input::KeyUp.clicked) direction = 2;
	if (Input::KeyDown.clicked) direction = 3;
}

void Player::PlayerDraw()
{
	//âEå¸Ç´
	if (direction == 0)
	{
		TextureAsset(L"soldier").uv(0, 0.25, 0.25, 0.25).resize(32, 32).draw(x, y);
		/*if (timer % 240 == 0) TextureAsset(L"soldier").uv(0, 0.25, 0.25, 0.25).draw(x, y);
		if (timer % 240 == 60) TextureAsset(L"soldier").uv(0.25, 0.25, 0.25, 0.25).draw(x, y);
		if (timer % 240 == 120) TextureAsset(L"soldier").uv(0.50, 0.25, 0.25, 0.25).draw(x, y);
		if (timer % 240 == 180) TextureAsset(L"soldier").uv(0.75, 0.25, 0.25, 0.25).draw(x, y);*/
	}
	//ç∂å¸Ç´
	if (direction == 1)
	{
		TextureAsset(L"soldier").uv(0, 0.50, 0.25, 0.25).resize(32, 32).draw(x, y);
		/*if (timer % 240 == 0) TextureAsset(L"soldier").uv(0, 0.50, 0.25, 0.25).draw(x, y);
		if (timer % 240 == 60) TextureAsset(L"soldier").uv(0.25, 0.50, 0.25, 0.25).draw(x, y);
		if (timer % 240 == 120) TextureAsset(L"soldier").uv(0.50, 0.50, 0.25, 0.25).draw(x, y);
		if (timer % 240 == 180) TextureAsset(L"soldier").uv(0.75, 0.50, 0.25, 0.25).draw(x, y);*/
	}
	//è„å¸Ç´
	if (direction == 2)
	{
		TextureAsset(L"soldier").uv(0, 0.75, 0.25, 0.25).resize(32, 32).draw(x, y);
		/*if (timer % 240 == 0) TextureAsset(L"soldier").uv(0, 0.75, 0.25, 0.25).draw(x, y);
		if (timer % 240 == 60) TextureAsset(L"soldier").uv(0.25, 0.75, 0.25, 0.25).draw(x, y);
		if (timer % 240 == 120) TextureAsset(L"soldier").uv(0.50, 0.75, 0.25, 0.25).draw(x, y);
		if (timer % 240 == 180) TextureAsset(L"soldier").uv(0.75, 0.75, 0.25, 0.25).draw(x, y);*/
	}
	//â∫å¸Ç´
	if (direction == 3)
	{
		TextureAsset(L"soldier").uv(0, 0, 0.25, 0.25).resize(32,32).draw(x, y);
		/*if (timer % 240 == 0) TextureAsset(L"soldier").uv(0, 0, 0.25, 0.25).draw(x, y);
		if (timer % 240 == 60) TextureAsset(L"soldier").uv(0.25, 0, 0.25, 0.25).draw(x, y);
		if (timer % 240 == 120) TextureAsset(L"soldier").uv(0.50, 0, 0.25, 0.25).draw(x, y);
		if (timer % 240 == 180) TextureAsset(L"soldier").uv(0.75, 0, 0.25, 0.25).draw(x, y);*/
	}
}

void Player::Check_Name()
{

	String check = L"Ç†Ç»ÇΩÇÃÇ»Ç‹Ç¶ÇÕ" + name + L"Ç≈Ç∑ÇÀÅH";
	font(check).draw(10, 100);
	font(L"YES•••Y | NO•••N").draw(10, 150);
}

void Player::Get_Name()
{

	Input::GetCharsHelper(name);
	font(name).drawCenter(220);

}
