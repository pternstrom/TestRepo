/*
Mini Project: Bookshop. Per Ternström, 2022-03-09


===========================================================
 */

#include <iostream>
#include <string.h>
#include <typeinfo>
#include "bookshop_13.h"


using namespace std;

// class Book
// {
// private:
//     string author, title, publisher;
//     int price, copies, selection_main, Booktitles;

// public:
//     // Book(string author, string title, string publisher); //constructor
//     void setAuthor(string authorIn);
//     void setTitle(string titleIn);
//     void setPublisher(string publisherIn);
//     void setPrice(float priceIn);
//     void setCopies(int copiesIn);

//     string getAuthor();
//     string getTitle();
//     string getPublisher();
//     int getPrice();
//     int getCopies();

//     // void search (string title, string author);
//     //  void setBooks (int lenghtIn);
//     void print();
// };
string Book::getAuthor() { return author; }
string Book::getTitle() { return title; }
string Book::getPublisher() { return publisher; }
int Book::getPrice() { return price; }
int Book::getCopies() { return copies; }

// Book::Book(string author, string title);
void Book::setAuthor(string authorIn) { author = authorIn; }
void Book::setTitle(string titleIn) { title = titleIn; }
void Book::setPublisher(string publisherIn) { publisher = publisherIn; }
void Book::setPrice(float priceIn) { price = priceIn; }
void Book::setCopies(int copiesIn) { copies = copiesIn; }
// void Book::setBooktitles (int lenghtIn) {Booktitles=lenghtIn;}
void Book::print() { 
                                       
                    cout<< author << " \t" << title << " \t"
                    << publisher << " \t" << price << "\t " << copies << endl; 
                    }

//----------------------------------------------

// Book *book;
// int length = 0;
// int i = 0;
// void main_menu(int lenght);
// void buy_Book(int lenght);
// void entry_book(int lenght);
// void search(string author, string title, int lenght);
// void edit(int lenght);



