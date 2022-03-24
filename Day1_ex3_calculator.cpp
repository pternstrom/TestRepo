#include <iostream>
#include <math.h>

using namespace std;


//simple calculator


int main()
{
    char op;
    float a, b;
    float result;

std::cout<<"operator * eller / eller + eller - \n";
std::cin>>op;

std::cout<<"tal 1  ";
cin>>a;
cout<<"tal 2  ";
cin>>b;

switch(op)
    {
        case '+':   
                    {
                        result = a + b;
                        break;
                    }
        case '-':   
                    {
                        result = a - b;
                        break;
                    }
        case '*':   
                    {
                        result = a * b;
                        break;
                    }
        
        case '/':   
                    {
                        result = a / b;
                        break;
                    }
        default:
                    std::cout<<"Illegal operation";
    }

    std::cout<<a<<op<<b<<" = "<<result<<"\n";

    return 0;
}