#include <iostream>
#include <string>
using namespace std;

struct Library {
    int bookId;
    string bookName;
    string authorName;
    int copies;
};

int main() {
    Library books[10];   
    int count = 0;      
    int choice = 0;

    while (choice != 4) {
        cout << "\n**** MINI LIBRARY SYSTEM ****\n";
        cout << "1. Add Book\n";
        cout << "2. Issue Book\n";
        cout << "3. Display Books\n";
        cout << "4. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        if (choice == 1) {
            if (count >= 10) {
                cout << "Library is full! Cannot add more books.\n";
                continue;
            }
            cout << "\nEnter Book ID: ";
            cin >> books[count].bookId;
            cin.ignore();

            cout << "Enter Book Name: ";
            getline(cin, books[count].bookName);

            cout << "Enter Author Name: ";
            getline(cin, books[count].authorName);

            cout << "Enter Number of Copies: ";
            cin >> books[count].copies;

            count++;
            cout << "Book Added Successfully!\n";
        }

        else if (choice == 2) {
            int id;
            bool found = false;
            cout << "Enter Book ID to Issue: ";
            cin >> id;

            for (int i = 0; i < count; i++) {
                if (books[i].bookId == id) {
                    found = true;
                    if (books[i].copies > 0) {
                        books[i].copies--;
                        cout << "Book Issued Successfully!\n";
                    } else {
                        cout << "No copies available!\n";
                    }
                }
            }
            if (!found) {cout << "Book ID not found!\n";
            }
        }

        else if (choice == 3) {
            if (count == 0) {
                cout << "No books in the library!\n";
            } else {
                cout << "\n--- Library Books ---\n";
                for (int i = 0; i < count; i++) {
                    cout << "Book ID: " << books[i].bookId << endl;
                    cout << "Book Name: " << books[i].bookName << endl;
                    cout << "Author Name: " << books[i].authorName << endl;
                    cout << "Available Copies: " << books[i].copies << endl;
                    cout << "----------------------\n";
                }
            }
        }

        else if (choice == 4) {
            cout << "Exited successfully!\n";
        }

        else {
            cout << "Invalid Choice!\n";
        }
    }
    return 0;
}
