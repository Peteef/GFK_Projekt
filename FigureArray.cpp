#define _CRT_SECURE_NO_WARNINGS

#include <vector>

#include "FigureArray.h"
#include "Line.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Polygon.h"
#include "CPolygon.h"
#include <fstream>

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

void FigureArray::AddCircle(int x, int y, int radius, int r, int g, int b, int R, int G, int B)
{
	array.push_back(new Circle(x, y, radius, r, g, b, R, G, B));
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

void FigureArray::SaveToFile(std::string path)
{
	std::ofstream file(path);

	file << size << "\n";
	for(int i = 0; i < size; i++)
	{
		file << array[i] << "\n";
	}

	file.close();
}

void FigureArray::LoadFromFile(std::string path)
{
	std::ifstream file(path);

	int nfigs;
	file >> nfigs;
	for (int i = 0; i < nfigs; i++)
	{
		int id = 0;
		file >> id;
		switch (id)
		{
		case 1:
		{
			int data[7];
			for(int i = 0; i < 7; i++)
			{
				file >> data[i];
			}
			AddLine(data[0], data[1], data[2], data[3], data[4], data[5], data[6]);
			break;
		}
		case 2:
		{
			int data[9];
			for (int i = 0; i < 9; i++)
			{
				file >> data[i];
			}
			AddCircle(data[0], data[1], data[2], data[3], data[4], data[5], data[6], data[7], data[8]);
			break;
		}
		case 3:
		{
			int data[10];
			for (int i = 0; i < 10; i++)
			{
				file >> data[i];
			}
			AddRectangle(data[0], data[1], data[2], data[3], data[4], data[5], data[6], data[7], data[8], data[9]);
			break;
		}
		case 4:
		{
			int n;
			file >> n;

			int* coordTab = new int[2 * n];
			int data[6];
			for (int i = 0; i < 2*n; i++)
			{
				file >> coordTab[i];
			}
			for (int i = 0; i < 6; i++)
			{
				file >> data[i];
			}
			AddPolygon(coordTab, n, data[0], data[1], data[2], data[3], data[4], data[5]);
			delete[] coordTab;
			break;
		}
		case 5:
		{
			int data[10];
			for (int i = 0; i < 10; i++)
			{
				file >> data[i];
			}
			AddCPolygon(data[0], data[1], data[2], data[3], data[4], data[5], data[6], data[7], data[8], data[9]);
			break;
		}
		default:
			break;
		}
	}
}
