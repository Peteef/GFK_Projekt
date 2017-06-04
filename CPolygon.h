#pragma once

#include "Figure.h"

class CPolygon : public Figure
{
public:
	CPolygon(int x, int y, int radius, int n, int r, int g, int b, int R, int G, int B);

	int* Get() override;

	static const int ID = 5;

private:
	Point p;
	int radius;
	int n;
	int r, g, b;
	int R, G, B;
};