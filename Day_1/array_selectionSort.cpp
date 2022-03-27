/*
Assignment 1b
 Array selection sort. Per Ternström
 */

#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int size = 8;
    int arr[size]={38,72,1,37,5,9,20, 38}; 
    int i = 0;
    int j, temp;
    int arrSize = sizeof(arr)/sizeof(arr[0]);

    cout << "size of array =  " <<arrSize  <<"\n\n";
    cout << "Element\t\t" << "Value \n";// <<arrSize  <<"\n";
 
    for (i; i<size; i++  )
    {
        std::cout <<i <<"\t\t"<<arr[i]  <<"\n";
        
    }
 
//*******************************selection sort*****************'
cout<<endl;
for(i = 0; i < size-1; i++) {
   for(j = i+1; j<size; j++)
   {
      
      if(arr[j] < arr[i]) {
         temp = arr[i];
         arr[i] = arr[j];
         arr[j] = temp;
      }
   }
}
//****************************selection sort***********************
cout <<"Sorted Element List ...\n";
for(i = 0; i<size; i++) {
   cout <<arr[i]<<"\t";
   }

cout<<"\n\n";
    return 0;
}

