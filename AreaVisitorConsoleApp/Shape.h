#pragma once
class Visitor;

class Shape
{
protected:
	Shape();

public:
	
	~Shape();

	virtual double Accept(Visitor* objIn) = 0;
	
};

