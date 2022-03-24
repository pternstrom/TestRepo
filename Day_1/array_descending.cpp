//Assignment 1c. Array descending sort. Per Ternström


/*Write a program to return an array containing the values between two 8-bits unsigned integers IN DESCENDING
ORDER EXCLUSIVE. The function takes 2 values (LowerValue and UpperValue), it shall determine the values in
between, and then arrange the sequence in descending order excluding the upper and lower values.
If the LowerValue is greater than or equal the UpperValue, return an array of 2 elements, both containing value =
0xFF
Example:
Input: LowerValue=2 and UpperValue=5 Output:
Output Array=4,3 Output Array Size=2*/




#include <stdio.h>
#include <iostream>
using namespace std;

int main ()
{
unsigned int LowerValue, UpperValue;
int size;

cout<<"Input Lowervalue \n";
cin>>LowerValue;
cout<<"Input UpperValue \n";
cin>>UpperValue;

size = UpperValue - LowerValue;
//cout<<size <<"\n";

int array[size]; //= {0}; seems to be ok or  should array be set to 0?
int index = 0;          //index is assigned in each loop to the array
cout<<"array \n";

if (LowerValue >= UpperValue)
{
    cout<<"array [" <<"0xFF, 0xFF] \n";
}
else 
{
for(int i = UpperValue-1; i > LowerValue; --i)  // loop start from upper i equal to Upper value minus 1 to i greater than lower value.
    {
        array[index] = i;
        cout<<array[index] <<" ";
    }
}
cout<<"\n\n";

return 0;
}

