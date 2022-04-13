#include <iostream>
using namespace std;

/*
Test of Derived classes and operator overloading.
Assignment week 2. Per Ternström
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


    //testcases
    cout <<"Test if rectangle area & perimeter are equal to triangle area & perimeter. Result: "<< (r == t ? "Equal." : "Not equal.") <<endl;
    cout <<"Test if rectangle area & perimeter are equal to circle area & perimeter. Result: "<< (r == c ? "Equal." : "Not equal.") <<endl;
    cout <<"Test if square area & perimeter are equal to circle area & perimeter. Result: "<< (s == c ? "Equal." : "Not equal.") <<endl;
    cout <<"Test if square area & perimeter are equal to triangle area & perimeter. Result: "<< (s == t ? "Equal." : "Not equal.") <<endl;
    cout <<"Test if circle area & perimeter are equal to triangle area & perimeter. Result: "<< (c == t ? "Equal." : "Not equal.") <<endl;
    cout <<"Code test. Test if circle area & perimeter are equal to circle area & perimeter. Result: "<< (c == c ? "Equal." : "Not equal.") <<endl;

    return 0;
}