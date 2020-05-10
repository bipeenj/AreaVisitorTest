#pragma once
#include "Shape.h"
class Rectangle :
	public Shape
{
public:
	Rectangle();
	~Rectangle();
	virtual double Accept(Visitor* objIn);
};

