#pragma once

#include "Figure.h"
#include <ostream>

class BCurve : public Figure
{
public:
	BCurve(int* coordTab, int n, int r, int g, int b);
	~BCurve();

	int* Get();
	void GetStream(std::ostream& ostr);

	static const int ID = 6;

private:
	int* data;
};
