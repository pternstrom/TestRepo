#include <stdio.h>
#include <iostream>
using namespace std;

// Per Ternström assignment 1 sorting array. Bubble sort

/*
 Description:
 bubble sort in an array of size "int size"
 */


int main()
{
    int size = 7;
    int arr[size]={38,72,1,37,5,9,20};
    int i = 0;
    int j, temp;
    int arrSize = sizeof(arr)/sizeof(arr[0]);

    cout << "size of array =  " <<arrSize  <<"\n\n";
    cout << "Element\t\t" << "Value \n";// <<arrSize  <<"\n";
 
    for (i; i<size; i++  )
    {
        std::cout <<i <<"\t\t"<<arr[i]  <<"\n";
        
    }
 
cout<<endl;
for(i = 0; i<size; i++) {
   for(j = i+1; j<size; j++)
   {
      if(arr[j] < arr[i]) {
         temp = arr[i];
         arr[i] = arr[j];
         arr[j] = temp;
      }
   }
}
cout <<"Sorted Element List ...\n";
for(i = 0; i<size; i++) {
   cout <<arr[i]<<"\t";
   }

cout<<"\n\n";

    return 0;
}
