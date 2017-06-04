#pragma once

#include <vector>

#include "Figure.h"

class FigureArray
{
public:
	FigureArray();

	std::vector<Figure*> Get() const;

	//Settery
	void AddLine(int x1, int y1, int x2, int y2, int r, int g, int b);
	void AddCircle(int x, int y, int r, int g, int b, int R, int G, int B);

private:
	std::vector<Figure*> array;
	int size;
};