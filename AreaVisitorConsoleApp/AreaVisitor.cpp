#include "pch.h"
#include "AreaVisitor.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
AreaVisitor::AreaVisitor()
{
}


AreaVisitor::~AreaVisitor()
{
}

double AreaVisitor::Visit(Circle* objIn)
{
	auto radius = objIn->getRadius();
	return radius * radius;
}

double AreaVisitor::Visit(Triangle * objIn)
{
	auto base = objIn->getBase();
	auto height = objIn->getHeight();
	return (base * height/2.0);
}

double AreaVisitor::Visit(Rectangle * objIn)
{
	auto width = objIn->Width();
	auto height = objIn->Width();
	return width*height;
}
