#include "pch.h"
#include "Triangle.h"
#include "Visitor.h"

Triangle::Triangle()
{
}


Triangle::~Triangle()
{
}

double Triangle::Accept(Visitor * objIn)
{
	return ( nullptr != objIn) ? objIn->Visit(this): 0.0;
}
