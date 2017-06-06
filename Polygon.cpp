#include "Polygon.h"

Polygon::Polygon(int* coordTab, int n, int r, int g, int b, int R, int G, int B)
{
	nodes = new Point[n];
	this->n = n;

	for(int i = 0; i < n; i++)
	{
		nodes[i].Set(coordTab[2 * i], coordTab[2 * i + 1]);
	}

	this->r = r;
	this->g = g;
	this->b = b;

	this->R = R;
	this->G = G;
	this->B = B;
}

Polygon::~Polygon()
{
	delete[] nodes;
}

int* Polygon::Get()
{
	int* tmp = new int[2 * n + 8];
	
	tmp[0] = ID;
	tmp[1] = n;

	for(int i = 1; i <= n; i++)
	{
		tmp[2 * i] = nodes[i - 1].GetX();
		tmp[2 * i + 1] = nodes[i - 1].GetY();
	}

	tmp[2 * n + 2] = r;
	tmp[2 * n + 3] = g;
	tmp[2 * n + 4] = b;

	tmp[2 * n + 5] = R;
	tmp[2 * n + 6] = G;
	tmp[2 * n + 7] = B;

	return tmp;
}

void Polygon::GetStream(std::ostream& ostr)
{
	int* data = Get();
	for (int i = 0; i < 2 * n + 8; i++)
	{
		ostr << data[i] << " ";
	}
	delete[] data;
}


