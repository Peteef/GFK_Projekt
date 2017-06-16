#include "Figure.h"
#include "FigureArray.h"

#include <iostream>
#include "Line.h"

int main()
{
	FigureArray arr;

	arr.AddLine(0, 0, 1, 1, 5, 6, 7);
	arr.Get()[0]->Get();

	arr.AddCircle(5, 7, 5, 1, 4, 5, 7, 8, 65);
	arr.Get()[1]->Get();

	arr.AddRectangle(3, 4, 5, 26, 4, 6, 43, 3, 6, 6);
	arr.Get()[2]->Get();

	int coordA[4] = { 1, 2, 3, 4 };

	arr.AddPolygon(coordA, 2, 34, 5, 4, 3, 3, 2);
	arr.Get()[3]->Get();

	arr.AddCPolygon(100, 100, 20, 5, 34, 34, 34, 34, 34, 34);
	arr.Get()[4]->Get();

	for(int i = 0; i < arr.Size(); i++)
	{
		std::cout << arr.Get()[i] << std::endl;
	}
	std::cout << "Wielkosc tablicy: " << arr.Size() << std::endl;

	arr.SaveToFile("../vect.txt");

	FigureArray arr2;

	arr2.LoadFromFile("../vect.txt");
	for (int i = 0; i < arr2.Size(); i++)
	{
		std::cout << arr2.Get()[i] << std::endl;
	}
	std::cout << "Wielkosc tablicy: " << arr2.Size() << std::endl;

	system("PAUSE");

}
