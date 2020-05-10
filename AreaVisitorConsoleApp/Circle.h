#pragma once
#include "Shape.h"
class Circle :
	public Shape
{
private:
	double m_Radius = 0.0;
public:
	Circle(double radiusIn);
	~Circle();
	double getRadius() { return m_Radius; }
	virtual double Accept(Visitor* objIn);
};

