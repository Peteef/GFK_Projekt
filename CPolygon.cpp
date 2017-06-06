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


	double angle = 0;
	int step = (double)radius / n;
	data = new int[2 * n + 8];

	data[0] = ID;
	data[1] = n;
	
	for(int i = 1; i <=n; i++)
	{
		data[2 * i] = radius * cos(angle * (PI / 180)) + p.GetX();
		data[2 * i + 1] = radius * sin(angle * (PI / 180)) + p.GetY();
		angle += step;
	}

	data[2 * n + 2] = r;
	data[2 * n + 3] = g;
	data[2 * n + 4] = b;

	data[2 * n + 5] = R;
	data[2 * n + 6] = G;
	data[2 * n + 7] = B;
}

int* CPolygon::Get()
{
	return data;
}

void CPolygon::GetStream(std::ostream& ostr)
{
	ostr << ID << " " << p.GetX() << " " << p.GetY() << " " << radius << " " << n << " " << r << " " << g << " " << b << " " << R << " " << G << " " << B;
}
