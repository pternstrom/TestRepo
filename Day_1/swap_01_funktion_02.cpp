#include <iostream>
using namespace std;

//swap mellan två array Per Ternström

int array1[] {2,5,8,9,3};
int array2[] {6,2,9,7,1};

void Beforeswap(int);
void Swap(int);

void Beforeswap(int)
{
cout<<"array1 before swap" <<"     "<<"array2 before swap" <<endl;
for(int i=0; i<5; i++)
    {
        cout<<array1[i] <<"\t\t\t" <<array2[i]  <<" "<<endl;
    }
}

void Swap(int)
{
int temp;
cout<<"array1 after swap" <<"\t"<<"array2 after swap" <<endl;
for(int i=0; i<5; i++)
    {
        temp = array1[i];
        array1[i] = array2[i];
        array2[i] = temp;
    }

for(int i=0; i<5; i++)
    {
        cout<<array1[i] <<"\t\t\t" <<array2[i]  <<endl;
    }
}

int main ()
{
int i {0};
int temp {0};

Beforeswap(i);
Swap(i);

return 0;
}