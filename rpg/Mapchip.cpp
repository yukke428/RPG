
#include "Mapchip.h"


void Mapchip::MapchipInit()
{
	map1 = CSVReader(L"Map/map1.csv");
	if (!map1) return;
}

