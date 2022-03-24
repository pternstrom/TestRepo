#include <stdio.h>
#include <iostream>
#include <string.h>
#include <cstdio>
using namespace std;

// Assignment 1 day 2 and 3 Per Ternström. Not according to instructions but i did the best i could...
/*
Write a program that removes the repeated number of an input sorted array and return a new array without
the repeated numbers. The function shall return error if the size of the input array is ZERO. The function takes
four inputs:
a. Old array.
b. Old array size.
c. New array (empty array).
d. The size of the new array after fill it in the function.
int removeDuplicates(int arr_old[], int n_old, int arr_new[], int *n_new)
Example:
arr1 = {1,2,3,3,3,4,4,5,5,5} arr2 = {1,2,3,4,5}
*/

int OldArrSize(int arr1[], int);
int NewArray(int oldArr1[], int oldsize, int newArray[], int Newsize);


int main()
{
int arr1 [] {1,2,3,3,3,4,4,5,5,5};
int arr2[] {0};

int arrSize = sizeof(arr1)/sizeof(arr1[0]);
int temp; //used for compare array values

int newArrSize;

newArrSize = OldArrSize(arr1, arrSize); //New arrsize reads return from OldArrSize

NewArray(arr1, arrSize, arr2, newArrSize);


    cout<<"Ny array " <<endl;
    for (int i=0; i<newArrSize ; i++)
    {
        cout<<arr2[i] ;
        
    }
    cout<<endl;
    

return 0;
}


int OldArrSize(int arr1[], int arrSize)
{
int temp; //used for compare array values

//Determine the new array size and return it as arrSize
for (int i=0; i<arrSize; i++)
    {
        temp = arr1[i];
        if (temp = temp)
        {arrSize--;}
    }
return arrSize;
}

int NewArray(int oldArr1[], int oldsize, int newArray[], int Newsize)
{
int temp {0}; //used for compare array values

//loop oldsize. for each step check if array value on position i and i+1 are equal.

int index {0};
for (int i = 0; i < oldsize-1 ; i++)
    {
        temp = oldArr1[i];
        if (oldArr1[i] != oldArr1[i+1]) {
            newArray[index] = oldArr1[i];
            index++;
             }
        
    }
newArray[index] = oldArr1[oldsize-1];

return 0;
}


