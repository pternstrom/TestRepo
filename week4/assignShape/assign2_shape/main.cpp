#include <iostream>
using namespace std;

/* Assignment week 3 day 3. Template
Write a function template which receives two of any shapes from last week’s assignment, compares them, and
prints out the result.
*/

#include "shape.cpp"

int main()
{
    Rectangle r(3, 4);
    Triangle t(3, 4);
    Circle c(5);
    Square s(3);

    cout<<"call compare template if Rect and triangle area and perimeter are equal \n ";
    compare<>(r, t);
    cout<<endl;
    cout<<"call compare template if Rect and circle area and perimeter are equal \n ";
    compare<>(r, c);
    cout<<endl;
     cout<<"call compare template if Rect and square area and perimeter are equal \n ";
    compare<>(r, s);
    cout<<endl;
    cout<<"call compare template if Traingle and circle area and perimeter are equal \n ";
    compare<>(t, c);
    cout<<endl;
     cout<<"call compare template if Traingle and square area and perimeter are equal \n ";
    compare<>(t, s);
    cout<<endl;

       return 0;
}