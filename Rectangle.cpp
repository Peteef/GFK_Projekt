#include "Rectangle.h"

Rectangle::Rectangle(int x1, int y1, int x2, int y2, int r, int g, int b, int R, int G, int B)
{
	data[0] = ID;
	data[1] = x1;
	data[2] = y1;
	data[3] = x2;
	data[4] = y2;
	data[5] = r;
	data[6] = g;
	data[7] = b;
	data[8] = R;
	data[9] = G;
	data[10] = B;
}

int* Rectangle::Get()
{
	return data;
}

void Rectangle::GetStream(std::ostream& ostr)
{
	int* data = Get();
	for (int i = 0; i < 11; i++)
	{
		ostr << data[i] << " ";
	}
	delete[] data;
}
