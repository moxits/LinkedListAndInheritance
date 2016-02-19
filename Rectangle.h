#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Square.h"

class Rectangle: public Square
{
protected:
	double height;
	

public:
	Rectangle( int x = 0, int y = 0, int siz = 0, double w = 0, double h =0)
		: Square(x,y,siz,w), height(h)
	{
	}	

	void draw() const
	{
		cout << "* * * * * *\n"
		     << "*         *\n"
		     << "*         *\n"
		     << "*         *\n"
		     << "*         *\n"
		     << "*         *\n"
    		     << "*         *\n"
		     << "*         *\n"
		     << "* * * * * *\n"
		     << endl;
	}
	
	double area()
	{
		return Square::side*height;
	}
	~Rectangle(){}
};
#endif /* RECTANGLE_H */
