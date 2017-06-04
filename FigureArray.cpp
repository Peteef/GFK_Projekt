#include <vector>

#include "FigureArray.h"
#include "Line.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Polygon.h"
#include "CPolygon.h"

FigureArray::FigureArray()
{
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

void FigureArray::AddRectangle(int x1, int y1, int x2, int y2, int r, int g, int b, int R, int G, int B)
{
	array.push_back(new Rectangle(x1, y1, x2, y2, r, g, b, R, G, B));
	size++;
}

void FigureArray::AddPolygon(int* coordTab, int n, int r, int g, int b, int R, int G, int B)
{
	array.push_back(new Polygon(coordTab, n, r, g, b, R, G, B));
	size++;
}

void FigureArray::AddCPolygon(int x, int y, int radius, int n, int r, int g, int b, int R, int G, int B)
{
	array.push_back(new CPolygon(x, y, radius, n, r, g, b, R, G, B));
	size++;
}

int FigureArray::Size() const
{
	return size;
}
