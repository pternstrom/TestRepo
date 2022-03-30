/*
Assignment clas week 2, day 2-3

 A car service shop needs to keep track of the records of services they provide to their customer. Create a system
 for them so they could keep ATLEAST the below records:

 -Date the customer visited
 -Services performed (at least 2 different services)
 -Parts changed (at least 2 different parts)
 -Payment (method & amount)
========================================================================================
 */

#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
#include <typeinfo>

using namespace std;

class Service
{
    // public:
    int date, amount1, parts;
    int services;
    // string part1;
    // string part2;
    string Pmethod;
    string partName[3];

public:
    void setDate(int dateIn);
    void setPart(int parts); // Takes number of parts to be replaced and iterates cout/cin of parts. store into PartName[]
    void setService(int serviceIn);
    void setPmethod(string PmethodIn);
    void setAmount(int amountIn);

    int getDate();
    string* getpart(); 
    int getService();
    string getPmethod();
    int getAmount();

    void print();
};

int Service::getDate() { return date; }
int Service::getService() { return services; }
void Service::setPmethod(string PmethodIn) { Pmethod = PmethodIn; }
void Service::setAmount(int amountIn) { amount1 = amountIn;}
void Service::setDate(int dateIn) { date = dateIn; }

void Service::setPart(int parts)
{
    int i;
    for (i = 0; i <= parts; i++)
    {
        cout << "replaced part (max 3 parts) " << i + 1 << endl;
        cin >> partName[i];
    }
}

string* Service::getpart()
{
    //string *partName = new string[3];
    return partName;
}

void Service::print()
{
    cout << "\ncustomer\ndate"
         << "\tservice nr\tparts\t\tPayment.method\tPayment \n"
         << date << "\t" << services << "\t\t" << *partName
         << "\t\t" << Pmethod << "\t\t" << amount1 << "\n\n";
}

// typeid(obj2).name()

void Service::setService(int serviceIn) { services = serviceIn; }

int main()
{
    Service customer1;
    //Service customer2;

    int date, amount, nrOfParts;
    string Pmethod;
    // string part[3];
    int service;

    // int date2, amount2;
    // string part12, part22, Pmethod2;
    // int service2;

    cout << "Customer1 servive date (YYMMDD) \n";
    cin >> date;

    cout << "Customer replaced part(s) max 3.\n";
    cin >> nrOfParts;

    cout << "Payment method (cash/Card)\n";
    cin >> Pmethod;
    cout << "amount\n";
    cin >> amount;
    cout << "Customer1 servive number (1-9) \n";
    cin >> service;

    // cout << "Customer2 servive date (YYMMDD) \n";
    // cin >> date2;
    // cout << "Customer2 part1 and part2 (press enter between each input) \n";
    // cin >> part12 >> part22;
    // cout << "Payment method (cash/Card)\n";
    // cin >> Pmethod2;
    // cout << "amount\n";
    // cin >> amount2;
    // cout << "Customer2 servive number (1-9) \n";
    // cin >> service2;

    customer1.setDate(date);               // read date from input and pass it to setDate funktion.
    customer1.setPmethod(Pmethod); // read amount and Pmethod from input and pass it to setPmethod funktion.
    customer1.setAmount(amount);
    customer1.setPart(nrOfParts);          // read number of parts and pass to setPart funktion.

    // customer2.setDate(date2);         // read date from input and pass it to setDate funktion.
    // customer2.setPart(part12, part22); // read part1 and part2 from input and pass it to setPart funktion.
    // customer2.setPmethod(amount2, Pmethod2); // read amount and Pmethod from input and pass it to setPmethod funktion.

    customer1.print(); // print customer1. 

    // customer2.print(date2, part12, part22, service2, amount2, Pmethod2); // print customer2

    return 0;
}