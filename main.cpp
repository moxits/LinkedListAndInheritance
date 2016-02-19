#include "Shape.h"
#include "Circle.h"
#include "Square.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Picture.h"
using namespace std;
#include <iostream>

int main()
{
	Picture p;
	p.enter( new Triangle(0,0, 0, 5, 5));
	p.enter(new Triangle(0,0,0,4,3));
	p.enter(new Circle(0,0,0,5));
	p.enter(new Circle(0,0,0,10));
    p.enter( new Square(0,0,0,10));
	p.enter( new Square(0,0,0,5));
	p.enter( new Rectangle(0,0,0,4,8));
	p.enter( new Rectangle(0,0,0,8,4));
	cout << p.totalArea() << endl;
	p.drawAll();
	return 0;
}
