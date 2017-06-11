#pragma once

#include "Figure.h"

class Rectangle : public Figure
{
public:
	Rectangle(int x1, int y1, int x2, int y2, int r, int g, int b, int R, int G, int B);

	int* Get();
	void GetStream(std::ostream& ostr);

	static const int ID = 3;

private:
    int data[11];
};
