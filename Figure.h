#pragma once

#include "Point.h"
#include <ostream>

class Figure
{
public:
	Figure(){}
	virtual ~Figure(){}

	virtual int* Get() = 0;
	virtual void GetStream(std::ostream& ostr) = 0;
};

inline std::ostream& operator<<(std::ostream& ostr, Figure* figure)
{
	figure->GetStream(ostr);
	return ostr;
}
