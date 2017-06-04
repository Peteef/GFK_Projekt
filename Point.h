#pragma once

class Point
{
public:
	Point(){ _x = 0; _y = 0; }
	Point(int x, int y) { _x = x; _y = y; }

	void Set(int x, int y) { _x = x; _y = y; }
	int GetX() const { return _x; }
	int GetY() const { return _y; }
private:
	int _x, _y;
};