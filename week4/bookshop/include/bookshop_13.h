/*
Mini Project: Bookshop. Per Ternström, 2022-03-09


===========================================================
 */

#include <iostream>
#include <string.h>
#include <typeinfo>

using namespace std;

class Book
{
private:
    string author, title, publisher;
    int price, copies, selection_main, Booktitles;

public:
    // Book(string author, string title, string publisher); //constructor
    void setAuthor(string authorIn);
    void setTitle(string titleIn);
    void setPublisher(string publisherIn);
    void setPrice(float priceIn);
    void setCopies(int copiesIn);

    string getAuthor();
    string getTitle();
    string getPublisher();
    int getPrice();
    int getCopies();

    // void search (string title, string author);
    //  void setBooks (int lenghtIn);
    void print();
};

