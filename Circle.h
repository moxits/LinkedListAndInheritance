#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"

class Circle : public Shape
{
protected:
	double radius;
public:
	Circle ( int newX = 0, int newY = 0, int newSize = 0 , double newRadius = 0 )
		: Shape(newX,newY,newSize), radius( newRadius)
	{
	}
	void draw() const
	{
		cout << "       * * *   \n"
		     << "    *         *  \n"  
		     << "  *             * \n"
		     << " *               * \n"
		     << "*                 * \n"
		     << "*		  * \n"
		     << " *		 * \n"
		     << "  *		* \n"
		     << "    *         *  \n"
		     << "       * * *   \n"
		     << endl;
	}
	double area() 
	{
		return M_PI * (radius * radius);
	}
	~Circle(){}
};
#endif /* CIRCLE_H */
