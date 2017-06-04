#include "Circle.h"

Circle::Circle(int x, int y, int r, int g, int b, int R, int G, int B)
{
	p.Set(x, y);

	this->r = r;
	this->g = g;
	this->b = b;

	this->R = R;
	this->G = G;
	this->B = B;
}

int* Circle::Get()
{
	int tmp[9];
	tmp[0] = ID;
	tmp[1] = p.GetX();
	tmp[2] = p.GetY();
	tmp[3] = r;
	tmp[4] = g;
	tmp[5] = b;
	tmp[6] = R;
	tmp[7] = G;
	tmp[8] = B;

	return tmp;
}
