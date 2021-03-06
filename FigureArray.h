#pragma once

#include <vector>

#include "Figure.h"

class FigureArray
{
public:
	FigureArray();
	~FigureArray();

	std::vector<Figure*> Get() const;
	Figure* operator[](int index);

	//Settery
	void AddLine(int x1, int y1, int x2, int y2, int r, int g, int b);
	void AddCircle(int x, int y, int radius, int r, int g, int b, int R, int G, int B);
	void AddRectangle(int x1, int y1, int x2, int y2, int r, int g, int b, int R, int G, int B);
	void AddPolygon(int* coordTab, int n, int r, int g, int b, int R, int G, int B);
	void AddCPolygon(int x, int y, int radius, int n, int r, int g, int b, int R, int G, int B);
	void AddBCurve(int* coordTab, int n, int r, int g, int b);

    //usuwanie
    int Drop(int index);
    
	//Wielkosc
	int Size() const;

	//Zapis i odczyt
	void SaveToFile(std::string path);
	void LoadFromFile(std::string path);

private:
	std::vector<Figure*> array;
	int size;
};
