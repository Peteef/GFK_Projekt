#include "BCurve.h"

BCurve::BCurve(int* coordTab, int n, int r, int g, int b)
{
	data = new int[2 * n + 5];

	data[0] = ID;
	data[1] = n;

	for (int i = 1; i <= n; i++)
	{
		data[2 * i] = coordTab[2 * (i - 1)];
		data[2 * i + 1] = coordTab[2 * (i - 1) + 1];
	}

	data[2 * n + 2] = r;
	data[2 * n + 3] = g;
	data[2 * n + 4] = b;
}

BCurve::~BCurve()
{
	delete[] data;
}

int* BCurve::Get()
{
	return data;
}

void BCurve::GetStream(std::ostream& ostr)
{
	int* data = Get();
	for (int i = 0; i < 2 * data[1] + 5; i++)
	{
		ostr << data[i] << " ";
	}
}
