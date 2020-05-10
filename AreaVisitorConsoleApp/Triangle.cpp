#include "pch.h"
#include "Triangle.h"
#include "Visitor.h"

Triangle::Triangle(double base, double height)
{
	m_Base = base;
	m_Height = height;
}


Triangle::~Triangle()
{
}

double Triangle::Accept(Visitor * objIn)
{
	return ( nullptr != objIn) ? objIn->Visit(this): 0.0;
}
