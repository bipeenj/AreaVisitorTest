#pragma once
#include "Shape.h"
class Rectangle :
	public Shape
{
private: 
	double m_Width = 0.0;
	double m_Height = 0.0;
public:
	Rectangle(double width, double height);
	~Rectangle();
	double Width() { return m_Width; }
	double Height() { return m_Height; }
	virtual double Accept(Visitor* objIn);
};

