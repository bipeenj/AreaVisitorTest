#include "pch.h"
#include "Rectangle.h"
#include "Visitor.h"

Rectangle::Rectangle(double width, double height)
{
	m_Width = width;
	m_Height = height;
}


Rectangle::~Rectangle()
{
}

double Rectangle::Accept(Visitor * objIn)
{
	return (nullptr != objIn) ? objIn->Visit(this) : 0.0;
}
