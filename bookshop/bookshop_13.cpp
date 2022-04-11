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

Book *book;
int length = 0;
int i = 0;
void main_menu(int lenght);
void buy_Book(int lenght);
void entry_book(int lenght);
void search(string author, string title, int lenght);
void edit(int lenght);

void entry_book(int lenght)
{
    string author, title, publisher;
    int price;
    int copies;
    int arr = lenght;

    // Book *book;
    book = new Book[arr];

    for (int i = 0; i < arr; i++)
    {
        cout << "Enter author name: ";
        cin >> author;
        book[i].setAuthor(author);

        cout << "Enter title name: ";
        cin >> title;
        book[i].setTitle(title);

        cout << "Enter publisher name: ";
        cin >> publisher;
        book[i].setPublisher(publisher);

        cout << "Enter book price: ";
        cin >> price;
        book[i].setPrice(price);

        cout << "Enter copiies: ";
        cin >> copies;
        book[i].setCopies(copies);
    }
        cout << "\nBooks in bookshop\n"<< "\nauthor title publisher price copies\n"; 
        for (int i = 0; i < arr; i++)
    {
        book[i].print();
    }
    main_menu(arr);
}

void buy_Book(int lenght)
{
    string titleBuy, ti;
    int amount, copies, price, newCopies;
    int arr = lenght;
    cout << "\nBooks in bookshop"
         << "\n\nauthor title publisher price copies\n";
    for (int i = 0; i < arr; i++)
    {
        book[i].print();
        // cout<<"\n"<<arr;
    }
    cout << "\nEnter book title you want to buy: ";
    cin >> titleBuy;
    cout << "Enter how many books you want to buy: ";
    cin >> amount;

    for (int i = 0; i < arr; i++)
    {
        ti = book[i].getTitle();
        copies = book[i].getCopies();
        price = book[i].getPrice();

        if ((ti == titleBuy) && (amount <= copies))
        {
            cout << "\nBook " << ti << " exists and the amount is available!\n";
            cout << "Total price is: " << amount << "*" << price << "=" << amount * price << endl;
            newCopies = copies - amount;
            cout << "new copies " << newCopies << endl;
            book[i].setCopies(newCopies);
            break;
        }

        else if ((ti == titleBuy) && (amount > copies))
        {
            cout << "Title exist but only in " << copies << " "
                 << "copies";
            break;
        }

        else if ((ti != titleBuy) && (amount > copies))
        {
            if (i == arr - 1)
                cout << "\nno such title or to many copies";
            break;
        }
    }

    main_menu(lenght);
}

void search(string title, string author, int lenght)
{
    int n = lenght;
    string auth, ti;
    cout << "\n"
         << "searched author: " << author
         << "\nsearched title: " << title << "\n";

    for (int i = 0; i < n; i++)
    {
        ti = book[i].getTitle();
        auth = book[i].getAuthor();

        if ((ti == title) && (auth == author))
        {
            cout << "\nBook exists!";
            break;
        }

        else if ((ti == title) && (auth != author))
        {
            cout << "\nResult: book title " << ti << " exist but with different author\n";
            break;
        }

        else if ((ti != title) && (auth == author))
        {
            cout << "\nResult: Author " << auth << " exist but for different book title";
            break;
        }

        else if ((auth == author) && (ti != title))
        {
            cout << "\nResult: Author " << auth << " exist but for different book title";
            break;
        }

        else if ((ti != title) && (auth != author))
        {
            if (i == n - 1)
            {
                cout << "\nResult Book does not exist";
                break;
            }
        }
    }
    main_menu(n);
}

void edit(int lenght)
{
    int arr = lenght;
    int copies, price, Selection, ePrice, eCopies;
    string title_edit, ti, author, eAuthor, ePublisher, eTitle;

cout << "\nBooks in bookshop"
    << "\n\nauthor title publisher price copies\n";

    for (i = 0; i < lenght; i++)
    {
        book[i].print();
    }

    cout << "\nedit book title ";
    cin >> title_edit;

    for (int i = 0; i < arr; i++)
    {
        ti = book[i].getTitle();
        copies = book[i].getCopies();
        price = book[i].getPrice();
        author = book[i].getAuthor();

        if (ti == title_edit)
        {
            cout << "Edit \n";
            cout << "What to edit? (1-5)\n1.Author 2.Title 3.Publisher 4.Nr of copies 5.Price.";
            cin >> Selection;
            switch (Selection)
            {
            case 1:
            {
                cout << "Edit author: ";
                cin >> eAuthor;
                book[i].setAuthor(eAuthor);
                break;
            }
            case 2:
            {
                cout << "Edit title: ";
                cin >> eTitle;
                book[i].setTitle(eTitle);
                break;
            }
            case 3:
            {
                cout << "Edit publisher: ";
                cin >> ePublisher;
                book[i].setPublisher(ePublisher);
                break;
            }

            case 4:
            {
                cout << "Edit nr of copies: ";
                cin >> eCopies;
                book[i].setCopies(eCopies);
                break;
            }

            case 5:
            {
                cout << "Edit price: ";
                cin >> ePrice;
                book[i].setPrice(ePrice);
                break;
            }

            default:
                std::cout << "Illegal operation";
            }
            break;
        }
    }

    main_menu(lenght);
}

void main_menu(int length)
{

    int selection;
    cout << "\n\n"
         << "1. Entry of new book.\n"
         << "2. Buy book.\n"
         << "3. Search for book.\n"
         << "4. Edit details of book.\n"
         << "5. Exit\n\n"
         << "Enter your choice: ";
    cin >> selection;
    switch (selection)
    {
    case 1:
    {
        int a = length;
        entry_book(a);
        break;
    }
    case 2:
    {
        int a = length;
        buy_Book(a);
        break;
    }
    case 3:
    {
        int a = length;
        string title, author;
        cout << "search title ";
        cin >> title;
        cout << "search author ";
        cin >> author;
        search(title, author, a);
        break;
    }

    case 4:
    {
        int a = length;
        // string title, author;
        // cout << "search title ";
        // cin >> title;
        // cout << "search author ";
        // cin >> author;
        edit(a);
        break;
    }

    case 5:
    {
        delete[] book;
        break;
    }

    default:
        std::cout << "Illegal operation";
    }
}

int main()
{

    printf("Enter number of books: ");
    scanf("%d", &length);

    book = new Book[length];

    main_menu(length);

    return 0;
}
