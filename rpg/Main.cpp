
#include "Main.h"


void Main()
{
	//ウィンドウサイズを幅640*480に指定
	Window::Resize(640, 480);

	MAP map; 

	TextureInit();
	map.MapInit();
	
	while (System::Update())
	{
		map.MapUpdata();
		map.MapDraw();
	}
}
