#pragma once
class Circle;
class Triangle;
class Rectangle;
class Visitor
{
protected:
	Visitor();
public:

	virtual double Visit(Circle* objIn)=0;

	virtual double Visit(Triangle* objIn) = 0;

	virtual double Visit(Rectangle* objIn) = 0;

};

