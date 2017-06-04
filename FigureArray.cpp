#include <vector>

#include "FigureArray.h"
#include "Line.h"
#include "Circle.h"

FigureArray::FigureArray()
{
	//Inicjalizacja tablicy??????
	size = 0;
}

std::vector<Figure*> FigureArray::Get() const
{
	return array;
}

void FigureArray::AddLine(int x1, int y1, int x2, int y2, int r, int g, int b)
{
	array.push_back(new Line(x1, y1, x2, y2, r, g, b));
	size++;
}

void FigureArray::AddCircle(int x, int y, int r, int g, int b, int R, int G, int B)
{
	array.push_back(new Circle(x, y, r, g, b, R, G, B));
	size++;
}
