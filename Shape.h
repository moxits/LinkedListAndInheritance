#ifndef SHAPE_H
#define SHAPE_H
using namespace std;
class Shape
{
protected:
	int centerX;
	int centerY;
	int size;

public:
	Shape( int x = 0, int y = 0, int s =  0 )
		: centerX( x ), centerY( y ), size( s )
	{
	}
	virtual double area() = 0;	
	virtual void draw() const = 0;
	virtual ~Shape(){}
};
#endif /* SHAPE_H */
