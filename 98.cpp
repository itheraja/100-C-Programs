#include <iostream>
#include <vector>
using namespace std;

class Book {
public:
    int id;
    string title;
    bool isIssued;

    Book(int i, string t) : id(i), title(t), isIssued(false) {}
};

class Library {
private:
    vector<Book> books;

public:
    void addBook(Book b) {
        books.push_back(b);
    }

    void issueBook(int id) {
        for (auto &b : books) {
            if (b.id == id && !b.isIssued) {
                b.isIssued = true;
                cout << "Book issued: " << b.title << endl;
                return;
            }
        }
        cout << "Book not available!" << endl;
    }
};

int main() {
    Library lib;
    lib.addBook(Book(1, "C++ Basics"));
    lib.addBook(Book(2, "OOP in C++"));

    lib.issueBook(2);
    lib.issueBook(2);

    return 0;
}
