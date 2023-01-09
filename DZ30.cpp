#include <iostream>
#include "Header.h"

Geometry::Geometry(int A, int B, int C, int D, int height)
{
	this->A = A;
	this->B = B;
	this->height = height;
}

int Geometry::areaTriangle()
{
	counter++;
	std::cout << "Area: " << 0.5 * A * height;
}

int Geometry::areaRectangle()
{
	counter++;
	std::cout << "Area: " << A * B;
}


int Geometry::areaSquare()
{
	counter++;
	std::cout << "Area: " << A * A;
}


int Geometry::areaRhombus()
{
	counter++;
	std::cout << "Area: " << A * height;
}

void Geometry::Counter()
{
	std::cout << "Counter: " << counter;
}
