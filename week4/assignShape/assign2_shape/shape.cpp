#include <iostream>
using namespace std;

/* Assignment week 3 day 3. Template
Write a function template which receives two of any shapes from last week’s assignment, compares them, and
prints out the result.
*/

template <typename T1, typename T2>
void compare(T1 input1, T2 input2)
{
    if (input1.area() == input2.area() && input1.perimeter() == input2.perimeter())
    {cout<<"area and perimeter are equal\n";}
    else 
    {cout<<"not equal\n";}
}


class Shape
{
public:
     double area();
     double perimeter();

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

public:
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

