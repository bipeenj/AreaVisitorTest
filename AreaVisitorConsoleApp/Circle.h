#pragma once
#include "Shape.h"
class Circle :
	public Shape
{
public:
	Circle();
	~Circle();
	virtual double Accept(Visitor* objIn);
};

