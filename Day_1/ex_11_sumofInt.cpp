#include <stdio.h>
#include <iostream>
#include <string.h>
#include <cstdio>
using namespace std;

//summering av ingående talserie i en array

void sum(int size);
int summa {0};


int main ()
{
int size {0};
int array[size];

cout<<"ange array storlek \n";
cin>>size;

sum(size);

return 0;
}

void sum(int size) {
for (int i=0; i<size; i++)
    {
        summa = summa + i;
    }
cout<<"array[0] + array[1] + ... array[size] = " <<summa <<endl;
}