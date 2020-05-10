#include "pch.h"
#include "Circle.h"
#include "Visitor.h"

Circle::Circle()
{
}


Circle::~Circle()
{
}

double Circle::Accept(Visitor * objIn)
{
	return (objIn!= nullptr) ?objIn->Visit(this):0.0;
}
