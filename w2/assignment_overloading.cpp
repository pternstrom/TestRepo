#include <iostream>
using namespace std;

/*
Assignment 1
© M. Rashid Zamani
• Implement an interface for shape, and derive circle, triangle, rectangle, square as children. Overload all three
comparison operators to compare the shapes based on their area -- if equal then their perimeter should be
considered. Only, and if only both area and perimeter are equal then the objects should be considered equal.
*/

class Shape
{
public:
    virtual double area() = 0;
    virtual double perimeter() = 0;

    bool operator==(Shape &b)
    {
        return (this->area() == b.area()) && (this->perimeter() == b.perimeter());
    }
};

class Rectangle : public Shape
{
private:
    double height;
    double width;

public:
    Rectangle(double h, double w)
    {
        height = h, width = w;
    }
    double area()
    {
        return height * width;
    }

    double perimeter()
    {
        return (height + width) * 2;
    }
};

class Circle : public Shape
{
    double diameter;
    int Pi = 3;

public:
    Circle(double d) { diameter = d; }

private:
    double area() { return Pi * diameter * diameter / 4; }
    double perimeter() { return Pi * diameter; }
};

class Triangle : public Shape
{
private:
    double height;
    double width;

public:
    Triangle(double h, double w)
    {
        height = h;
        width = w;
    }
    double area()
    {
        return height * width / 2;
    }

    double perimeter()
    {
        return 2 * height + width;
    }
};

class Square : public Shape
{
double side;

public:
    Square(double s) { side = s; }
    double area() { return side * side; }
    double perimeter() { return side * 4; }
};

int main()
{
    Rectangle r(3, 4);
    Triangle t(3, 4);
    Circle c(5);
    Square s(3);

    cout << (r == t) <<endl;
    cout << (r == c) <<endl;
    cout << (s == c) <<endl;

    return 0;
}