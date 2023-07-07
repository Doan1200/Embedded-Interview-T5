

#include<iostream>
#include<string>
using namespace std;

class Book
{
    private:
        string bookName;
        string writerName;
        int publishYear;
        int quantity;
    public:
        Book(string book = " ", string writer = " ", int year = 0, int number = 0);

        // Setter Methods
        void setBook(string book);
        void setWriter(string writer);
        void setPublishYear(int year);
        void setQuantity(int quantity);

        // Getter Methods
        string getBook();
        string getWriter();
        int getPublishYear();
        int getQuantity();

        // Methods
        void bookInfo();
    

};

Book::Book(string book, string writer, int year, int number)
{
    bookName = book;
    writerName = writer;
    publishYear = year;
    quantity = number;
}

void Book::setBook(string book)
{
    bookName = book;
}

void Book::setWriter(string writer)
{
    writerName = writer;
}

void Book::setPublishYear(int year)
{
    publishYear = year;
}

void Book::setQuantity(int number)
{
    quantity = number;
}

string Book::getBook()
{
    return bookName;
}

string Book::getWriter()
{
    return writerName;
}

int Book::getPublishYear()
{
    return publishYear;
}

int Book::getQuantity()
{
    return quantity;
}

void Book::bookInfo()
{
    cout << "Ten sach: " << bookName << endl;
    cout << "Ten tac gia: " << writerName << endl;
    cout << "Nam xuat ban: " << publishYear << endl;
    cout << "So luong: " << quantity << endl;
}

int main()
{
    string book, name;
    int year, number;

    cout << "Nhap vao ten sach: ";
    getline(cin, book);
    cout << "Nhap vao ten tac gia: ";
    getline(cin, name);
    cout << "Nhap vao nam xuat ban: ";
    cin >> year;
    cout << "Nhap vao so luong: ";
    cin >> number;

    Book b(book, name, year, number);
    b.bookInfo();

    return 0;
}