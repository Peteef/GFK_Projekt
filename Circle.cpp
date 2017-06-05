#include "Circle.h"

Circle::Circle(int x, int y, int radius, int r, int g, int b, int R, int G, int B)
{
	p.Set(x, y);
    this->radius=radius;
    
	this->r = r;
	this->g = g;
	this->b = b;

	this->R = R;
	this->G = G;
	this->B = B;
}

int* Circle::Get()
{
	int tmp[10];
	tmp[0] = ID;
	tmp[1] = p.GetX();
	tmp[2] = p.GetY();
	tmp[3] = radius;
	tmp[4] = r;
	tmp[5] = g;
	tmp[6] = b;
	tmp[7] = R;
	tmp[8] = G;
	tmp[9] = B;

	return tmp;
}
