#include <iostream>
using namespace std;

class Book {
protected:
    int bookId;
    string bookName;

public:
    void getBook() {
        cout << "Enter Book ID: ";
        cin >> bookId;
        cout << "Enter Book Name: ";
        cin >> bookName;
    }

    void displayBook() {
        cout << "\nBook ID: " << bookId;
        cout << "\nBook Name: " << bookName;
    }
};

class Library : public Book {
    string author;
    string issueStatus;

public:
    void getLibrary() {
        getBook();
        cout << "Enter Author Name: ";
        cin >> author;
        cout << "Enter Issue Status (Issued/NotIssued): ";
        cin >> issueStatus;
    }

    void displayLibrary() {
        displayBook();
        cout << "\nAuthor: " << author;
        cout << "\nIssue Status: " << issueStatus;
    }
};

int main() {
    Library l;
    l.getLibrary();
    l.displayLibrary();
    return 0;
}