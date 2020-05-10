#include "pch.h"
#include "Rectangle.h"
#include "Visitor.h"

Rectangle::Rectangle()
{
}


Rectangle::~Rectangle()
{
}

double Rectangle::Accept(Visitor * objIn)
{
	return (nullptr != objIn) ? objIn->Visit(this) : 0.0;
}
