#include "pch.h"
#include "AreaVisitor.h"
#include "Circle.h"

AreaVisitor::AreaVisitor()
{
}


AreaVisitor::~AreaVisitor()
{
}

double AreaVisitor::Visit(Circle* objIn)
{
	return 0.0;
}

double AreaVisitor::Visit(Triangle * objIn)
{
	return 0.0;
}

double AreaVisitor::Visit(Rectangle * objIn)
{
	return 0.0;
}
