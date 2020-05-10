// AreaVisitorConsoleApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <math.h>
#include<time.h>
#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "AreaVisitor.h"
int main()
{
    std::cout << "Hello World!\n"; 
	srand(time(0));
	int num = rand();
	int randomNumber = num % 3;
	Shape* shapeObject = nullptr;
	switch (randomNumber)
	{
		case 0:
			shapeObject = new Circle(5);
			break;
		case 1:
			shapeObject = new Triangle(5, 15);
			break;
		case 2:
			shapeObject = new Rectangle(15, 5);
			break;
	}
	AreaVisitor newVisitor;
	if (shapeObject != nullptr)
	{
		double outVal = shapeObject->Accept(&newVisitor);
		std::cout << "Result for shape object is :\n";
		std::cout << outVal;
	}
	getchar();
}
