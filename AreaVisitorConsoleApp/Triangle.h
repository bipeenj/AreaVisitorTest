#pragma once
#include "Shape.h"
class Triangle :
	public Shape
{
private:
	double m_Base = 0.0;
	double m_Height = 0.0;

public:
	Triangle(double width, double height);
	~Triangle();
	double getBase() { return m_Base; }
	double getHeight() { return m_Height; }
	virtual double Accept(Visitor* objIn);
};

