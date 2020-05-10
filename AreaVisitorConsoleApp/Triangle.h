#pragma once
#include "Shape.h"
class Triangle :
	public Shape
{
public:
	Triangle();
	~Triangle();
	virtual double Accept(Visitor* objIn);
};

