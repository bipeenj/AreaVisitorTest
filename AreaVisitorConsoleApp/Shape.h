#pragma once
class Visitor;

class Shape
{
public:
	Shape();
	~Shape();

	virtual double Accept(Visitor* objIn) = 0;
	
};

