/*
Assignment clas week 3, day 3_random number


========================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <string.h>
#include <typeinfo>
#include <iostream>
#include <vector>
#include <iterator>
#include <map>

using namespace std;

int main()
{

    // empty map container
    map<int, int> myMap;

    // declare iterator
    map<int, int>::iterator itr;

    int random;
    int dublicates = 0;

    /* initialize random seed: */

    srand(time(NULL)); // make sure random nr are random each time

    for (int i = 0; i < 10000; i++)
    {
        random = rand() % 34;
        // cout<<"random nr "<<random<<endl;

        if (myMap.find(random) != myMap.end())
        {

            myMap[random] = myMap.find(random)->second + 1;
            random++;
        }
        else
        {

            myMap[random] = 1;

            dublicates++;
        }
    }
    cout << "Random number"
         << "\t"
         << "Duplicates" << endl;
    for (itr = myMap.begin(); itr != myMap.end(); itr++)
    {
        cout << itr->first << "\t\t" << itr->second << endl;
    }

    // insert elements in random elements

    // for (int i = 0; i < index; i++)
    // {
    //      myMap.insert(pair<int, int>(i,0));
    // }

    return 0;
}
