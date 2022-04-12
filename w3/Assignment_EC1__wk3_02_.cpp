#include <cstdint>
#include <iostream>

using namespace std;

void read_data(unsigned long int dataIn)
{

unsigned long int data, Mask_seat_D, Mask_seat_Rear, Mask_Windows;

Mask_seat_D = 1000000000000000;    // Check driver seat belt at pos 1
Mask_seat_Rear = 0011100000000000; // Check if all three of the rear seat belts are active.
Mask_Windows = 0000011110000000; // Check staus of windows closed.


    if (data & Mask_seat_D)
        cout << "Driver seat belt active \n";
    else
        cout << "Driver seat belt not active \n";

    if (data & Mask_seat_Rear)
        cout << "All three rear seat belts are active \n";
    else
        cout << "All three rear seat belts are not active \n";

    if (data | Mask_Windows)
        cout << "At least one window is open \n\n";
    else
        cout << "All windows are closed \n";
}

int main()
{

// uint16_t data, Mask_seat_D, Mask_seat_Rear;
unsigned long int data, Mask_seat_D, Mask_seat_Rear;
// uint32_t data, Mask_seat_D;

// data = 1011101001011011;
// Mask_seat_D=1000000000000000;

data = 1011101001011010;

read_data(data);

return 0;
}