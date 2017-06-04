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
	void AddRectangle(int x1, int y1, int x2, int y2, int r, int g, int b, int R, int G, int B);
	void AddPolygon(int* coordTab, int n, int r, int g, int b, int R, int G, int B);
	void AddCPolygon(int x, int y, int radius, int n, int r, int g, int b, int R, int G, int B);

	//Wielkosc
	int Size() const;

	//Zapis i odczyt


private:
	std::vector<Figure*> array;
	int size;
};