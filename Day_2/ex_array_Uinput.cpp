#include <stdio.h>
#include <iostream>
#include <string.h>
#include <cstdio>
using namespace std;

//Passing integers into an array based on user unput of size
// array values is multiplyed by int mlpt

void ArrayCreate(int);
int summa {0};
int mltp;


int main ()
{
int size {0};

cout<<"ange storlek på array  "  <<endl;
cin>>size;
cout<<"ange multipel"<<endl;
cin>>mltp;

ArrayCreate(size);

return 0;
}

void ArrayCreate(int size) 
{
int array[size] {};
for (int i=0; i<size; i++)
    {
        array[i]=i*mltp; 
        cout<<array[i] <<" ";
        
    }
cout<<endl;
}