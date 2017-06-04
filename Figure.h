#pragma once

#include "Point.h"

class Figure
{
public:
	Figure(){}
	virtual ~Figure(){}

	virtual int* Get() = 0;
};