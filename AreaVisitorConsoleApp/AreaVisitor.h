#pragma once
#include "Visitor.h"
class AreaVisitor :
	public Visitor
{
public:
	AreaVisitor();
	~AreaVisitor();

	virtual double Visit(Circle* objIn);

	virtual double Visit(Triangle* objIn);

	virtual double Visit(Rectangle* objIn);
};

