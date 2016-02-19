#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Shape.h"

class Triangle: public Shape
{
protected:
	double height;
	double base;
public:
	Triangle( int newX = 0, int newY= 0, int newSize = 0, double h = 0, double b = 0)
		: Shape(newX,newY,newSize) , height(h), base(b)
	{
	}
	void draw() const
	{
		cout << "       *       \n"
		     << "     *   *     \n"
		     << "   *       *   \n"
		     << " *           * \n"
		     << "* * * * * * * * \n" 
		     << endl;
	}
	
	double area() 
	{
		return base * height / 2.0;
	}
	
	~Triangle(){}
};
#endif /* TRIANGLE_H */
