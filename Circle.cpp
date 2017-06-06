#include "Circle.h"

Circle::Circle(int x, int y, int radius, int r, int g, int b, int R, int G, int B)
{
	data[0] = ID;
	data[1] = x;
	data[2] = y;
	data[3] = radius;
	data[4] = r;
	data[5] = g;
	data[6] = b;
	data[7] = R;
	data[8] = G;
	data[9] = B;
}

int* Circle::Get()
{
	return data;
}

void Circle::GetStream(std::ostream& ostr)
{
	int* data = Get();
	for (int i = 0; i < 10; i++)
	{
		ostr << data[i] << " ";
	}
}
