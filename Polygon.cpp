#include "Polygon.h"

Polygon::Polygon(int* coordTab, int n, int r, int g, int b, int R, int G, int B)
{
	nodes = new Point[n];

	for(int i = 0; i < n; i++)
	{
		nodes[i].Set(coordTab[2 * i], coordTab[2 * i + 1]);
	}
	
    data = new int[2 * n + 8];
	
	data[0] = ID;
	data[1] = n;

	for(int i = 1; i <= n; i++)
	{
		data[2 * i] = nodes[i - 1].GetX();
		data[2 * i + 1] = nodes[i - 1].GetY();
	}

	data[2 * n + 2] = r;
	data[2 * n + 3] = g;
	data[2 * n + 4] = b;

	data[2 * n + 5] = R;
	data[2 * n + 6] = G;
	data[2 * n + 7] = B;
}

Polygon::~Polygon()
{
	delete[] nodes;
	delete[] data;
}

int* Polygon::Get()
{
	return data;
}

void Polygon::GetStream(std::ostream& ostr)
{
	int* data = Get();
	for (int i = 0; i < 2 * data[1] + 8; i++)
	{
		ostr << data[i] << " ";
	}
}
