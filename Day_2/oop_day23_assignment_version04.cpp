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
    int date, amount1, parts;
    int services;
    string Pmethod;
    string partName[3];

public:
    void setDate(int dateIn);
    void setPart(int parts); // Takes number of parts to be replaced and iterates cout/cin of parts. store into PartName[]
    void setService(int serviceIn);
    void setPmethod(string PmethodIn);
    void setAmount(int amountIn);

    int getDate();
    string *getpart();
    int getService();
    string getPmethod();
    int getAmount();

    void print();
};

int Service::getDate() { return date; }
int Service::getService() { return services; }
void Service::setPmethod(string PmethodIn) { Pmethod = PmethodIn; }
void Service::setAmount(int amountIn) { amount1 = amountIn; }
void Service::setDate(int dateIn) { date = dateIn; }

void Service::setPart(int parts)
{
    int i;
    for (i = 0; i < parts; i++)
    {
        cout << "replaced part (max 3 parts) " << i + 1 << endl;
        cin >> partName[i];
        // cout << "inserted data " << partName[i] << endl;
    }
}

string *Service::getpart()
{
    // string *partName = new string[3];
    return partName;
}

void Service::print()
{
    cout << "\ncustomer\ndate"
         << "\tservice nr\tparts\t\t\tPayment.method\tPayment \n"
         << date << "\t" << services << "\t\t";
    for (int i = 0; i < sizeof(partName) / sizeof(partName[0]); i++)
        cout << partName[i] << " ";
    cout << "\t" << Pmethod << "\t\t" << amount1 << "\n\n";

    // for (int) //loop cout
}

// typeid(obj2).name()

void Service::setService(int serviceIn) { services = serviceIn; }

int main()
{
    Service customer1;
    Service customer2;

    int date, amount, nrOfParts;
    string Pmethod;

    int service;

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

    customer1.setDate(date);       // read date from input and pass it to setDate funktion.
    customer1.setPmethod(Pmethod); // read amount and Pmethod from input and pass it to setPmethod funktion.
    customer1.setAmount(amount);
    customer1.setPart(nrOfParts); // read number of parts and pass to setPart funktion.

    cout << "Customer2 servive date (YYMMDD) \n";
    cin >> date;

    cout << "Customer2 replaced part(s) max 3.\n";
    cin >> nrOfParts;

    cout << "Payment method (cash/Card)\n";
    cin >> Pmethod;
    cout << "amount\n";
    cin >> amount;
    cout << "Customer2 servive number (1-9) \n";
    cin >> service;

    customer2.setDate(date);
    customer2.setPmethod(Pmethod);
    customer2.setAmount(amount);
    customer2.setPart(nrOfParts);

    customer1.print(); // print customer1.
    customer2.print();

    return 0;
}