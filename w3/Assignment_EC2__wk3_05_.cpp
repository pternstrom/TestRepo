
  
//Week 3 assignment EC++2. Per Ternström

#include <cstdint>
#include <iostream>
#include <bitset>
#include <bits/stdc++.h>
#include <cstddef>

using namespace std;

int main ()
{

bitset<8> bitsetAdd(bitset<4>& speed_4bit, bitset<3>& dist_front);
bitset<8> bitsetAdd2(bitset<3>& val_1, bitset<3>& val_2);




int speed=150; //speed km/h
 int dist[4]={300, 350, 550, 740};//distance, [front, rear, left, right] mm

  
int speed_resolution_trunc = trunc(speed/20);
int dist_resolution_trunc [4] = {400/150, 350/150, 550/150, 740/150};



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

 bitset<3> dist_front = dist_resolution_trunc[0];
 bitset<3> dist_rear =  dist_resolution_trunc[1];
 bitset<3> dist_left = dist_resolution_trunc[2];
 bitset<3> dist_right= dist_resolution_trunc[3];
 bitset<4> speed_4bit = speed_resolution_trunc;

//ToDo

bitset<8> result = bitsetAdd(speed_4bit, dist_front);

bitset<8> result_2 = bitsetAdd2(dist_rear, dist_left);

cout<<"\nRESULTAT addition of speed, dist frony int one 8bit \n"<<result<<endl<<endl;
cout<<"\nRESULTAT addition of 2xdist into one 8bit \n"<<result_2<<endl<<endl;


return 0;
}



bool fullAdder(bool b1, bool b2, bool& carry)
{
    bool sum = (b1 ^ b2) ^ carry;
    carry = (b1 && b2) || (b1 && carry) || (b2 && carry);
    return sum;
}

bitset<8> bitsetAdd(bitset<4>& speed_4bit, bitset<3>& dist_front)
{
    bool carry = false;
    // bitset to store the sum of the two bitsets
    bitset<8> ans;
    for (int i = 0; i < 8; i++) {
        ans[i] = fullAdder(speed_4bit[i], dist_front[i], carry);
    }
    return ans;
}


bitset<8> bitsetAdd2(bitset<3>& val_1, bitset<3>& val_2)
{
    bool carry = false;
    // bitset to store the sum of the two bitsets
    bitset<8> ans;
    for (int i = 0; i < 8; i++) {
        ans[i] = fullAdder(val_1[i], val_2[i], carry);
    }
    return ans;
}




// Utility function to add two bool values and calculate
// carry and sum