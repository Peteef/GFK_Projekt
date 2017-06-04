#pragma once

#include "Figure.h"

class Circle : public Figure
{
public:
	Circle(int x, int y, int r, int g, int b, int R, int G, int B);

	int* Get() override;

	static const int ID = 2;

private:
	Point p;
	int r, g, b;
	int R, G, B;
};