//Week 3 assignment EC++2. Per Ternström

#include <cstdint>
#include <iostream>
#include <bitset>
#include <bits/stdc++.h>
#include <cstddef>

using namespace std;

int main ()
{
int speed=150; //speed km/h
 int dist[4]={300, 350, 550, 740};//distance, [front, rear, left, right] mm

 int dist_front, dist_rear, dist_left, dist_right;
 
int speed_resolution_trunc = trunc(speed/20);
int dist_resolution_trunc [4] = {400/150, 350/150, 550/150, 740/150};
int speed_4bit;


//convert to 16 bit
cout << "The speed in the binary form is: " << bitset<4>(speed) <<"\n";
cout << "The front distance in the binary form is: " << bitset<3>(dist[0]) <<"\n";
cout << "The rear distance in the binary form is: " << bitset<3>(dist[1]) <<"\n";
cout << "The left distance in the binary form is: " << bitset<3>(dist[2]) <<"\n";
cout << "The right distance in the binary form is: " << bitset<3>(dist[3]) <<"\n\n";

cout<<"truncated speed \n";
cout<<"speed res (20) trunc "<<speed_resolution_trunc<<endl;
cout<<"The speed (150) resolution in the binary form is: " 
    << bitset<4>(speed_resolution_trunc)<<endl<<endl;

cout<<"truncated distance \n";
    for (int i=0; i<4; ++i)
cout<<"dist "<<dist[i]<<" resolution trunc "<<dist_resolution_trunc[i] <<endl;

cout<<"\nTruncated distance in binary form \n";
 for (int i=0; i<4; ++i)
cout<<"dist "<<dist_resolution_trunc[i]<<" resolution trunc "
<<bitset<3>(dist_resolution_trunc[i]) <<endl;

//add speed, 4xdistance into one 16 bit

bitset<3> dist_resolution_trunc[0] = dist_front;
bitset<3> dist_resolution_trunc[1] = dist_rear;
bitset<3> dist_resolution_trunc[2] = dist_left;
bitset<3> dist_resolution_trunc[3] = dist_right;
bitset<4>speed_resolution_trunc = speed_4bit;

//ToDo




return 0;
}