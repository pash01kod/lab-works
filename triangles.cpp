#include <iostream>
#include <cmath>

class Point
{
public:
    int x, y;
    Point()
    {

    }
    Point(int _x, int _y)
    {
        x = _x;
        y = _y;
    }
};

class Segment
{
public:
    Point point1;
    Point point2;

    Segment()
    {

    }
    Segment(Point p1, Point p2)
    {
        point1 = p1;
        point2 = p2;
    }

    double segmentLen()
    {
        return sqrt((point2.x - point1.x) * (point2.y - point1.y));
    }

};

class Triangle
{
public:
    Segment side1;
    Segment side2;
    Segment side3;

    double Perimetr()
    {
        return sqrt((side1.point2.x - side1.point1.x) * (side1.point2.y - side1.point1.y)) + sqrt((side2.point2.x - side2.point1.x) * (side2.point2.y - side2.point1.y)) + sqrt((side3.point2.x - side3.point1.x) * (side3.point2.y - side3.point1.y));
    }
};



int main()
{

	system("pause");
}