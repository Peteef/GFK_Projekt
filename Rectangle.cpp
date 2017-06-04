#include "Rectangle.h"

Rectangle::Rectangle(int x1, int y1, int x2, int y2, int r, int g, int b, int R, int G, int B)
{
	p1.Set(x1, y1);
	p2.Set(x2, y2);

	this->r = r;
	this->g = g;
	this->b = b;

	this->R = R;
	this->G = G;
	this->B = B;
}

int* Rectangle::Get()
{
	int tmp[11];
	tmp[0] = ID;
	tmp[1] = p1.GetX();
	tmp[2] = p1.GetY();
	tmp[3] = p2.GetX();
	tmp[4] = p2.GetY();
	tmp[5] = r;
	tmp[6] = g;
	tmp[7] = b;
	tmp[8] = R;
	tmp[9] = G;
	tmp[10] = B;

	return tmp;
}
