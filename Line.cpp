#include "Line.h"

Line::Line(int x1, int y1, int x2, int y2, int r, int g, int b)
{
    data[0] = ID;
	data[1] = x1;
	data[2] = y1;
	data[3] = x2;
	data[4] = y2;
	data[5] = r;
	data[6] = g;
	data[7] = b;
}

int* Line::Get()
{
	return data;
}

void Line::GetStream(std::ostream& ostr)
{
	int* data = Get();
	for (int i = 0; i < 8; i++)
	{
		ostr << data[i] << " ";
	}
}
