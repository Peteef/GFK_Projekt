#pragma once

#include "Figure.h"
#include <ostream>

class Line : public Figure
{
public:
	Line(int x1, int y1, int x2, int y2, int r, int g, int b);

	int* Get();
	void GetStream(std::ostream& ostr);
    
	static const int ID = 1;

private:
	int data[8];
};

