#define _USE_MATH_DEFINES
#include <cmath>
#ifndef SQUARE_H
#define SQUARE_H
#include "Shape.h"
class Square: public Shape
{
protected:
	double side;
	
public:
	Square( int x = 0, int y = 0, int s = 0, double Side = 0)
		: Shape(x,y,s), side(Side)
	{
	}
	
	void draw() const
	{
		cout << "*******\n"
		<< "*     *\n"
		<< "*     *\n"
		<< "*******\n"
		<< endl;
	}
	
	double area()
	{
		return side * side;
	}
	~Square(){}
};
#endif /* SQUARE_H */
