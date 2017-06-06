#include "Line.h"

Line::Line(int x1, int y1, int x2, int y2, int r, int g, int b)
{
	p1.Set(x1, y1);
	p2.Set(x2, y2);

	this->r = r;
	this->g = g;
	this->b = b;
}

int* Line::Get()
{
	int* tmp = new int[8];
	tmp[0] = ID;
	tmp[1] = p1.GetX();
	tmp[2] = p1.GetY();
	tmp[3] = p2.GetX();
	tmp[4] = p2.GetY();
	tmp[5] = r;
	tmp[6] = g;
	tmp[7] = b;

	return tmp;
}

void Line::GetStream(std::ostream& ostr)
{
	int* data = Get();
	for (int i = 0; i < 8; i++)
	{
		ostr << data[i] << " ";
	}
	delete[] data;
}

