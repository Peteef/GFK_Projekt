#include <cmath>

#include "CPolygon.h"

#define PI 3.1415

CPolygon::CPolygon(int x, int y, int radius, int n, int r, int g, int b, int R, int G, int B)
{
	p.Set(x, y);

	this->radius = radius;
	this->n = n;

	this->r = r;
	this->g = g;
	this->b = b;

	this->R = R;
	this->G = G;
	this->B = B;
}

int* CPolygon::Get()
{
	double angle = 0;
	int step = (double)radius / n;
	int* tmp = new int[2 * n + 8];

	tmp[0] = ID;
	tmp[1] = n;
	
	for(int i = 1; i <=n; i++)
	{
		tmp[2 * i] = radius * cos(angle * (PI / 180)) + p.GetX();
		tmp[2 * i + 1] = radius * sin(angle * (PI / 180)) + p.GetY();
		angle += step;
	}

	tmp[2 * n + 2] = r;
	tmp[2 * n + 3] = g;
	tmp[2 * n + 4] = b;

	tmp[2 * n + 5] = R;
	tmp[2 * n + 6] = G;
	tmp[2 * n + 7] = B;

	return tmp;
}
