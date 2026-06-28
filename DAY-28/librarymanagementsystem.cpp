#include <iostream>
#include <string>
using namespace std;

struct Library
{
    int bookId;
    string bookName;
    string authorName;
    int copies;
};

int main()
{
    Library book[10];

    int n, count = 0;
    int choice;
    int i;

    while (choice != 6)
    {
        cout << " ****LIBRARY MANAGEMENT SYSTEM**** " << endl;
        cout << "1. Add Book";
        cout << "\n2. Issue Book";
        cout << "\n3. Return Book";
        cout << "\n4. Update Book";
        cout << "\n5. Display Books";
        cout << "\n6. Exit";

        cout << "\nEnter Your Choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "\nEnter Number of Books: ";
            cin >> n;

            for (i = count; i < count + n; i++)
            {
                cout << "\nBook " << i + 1 << endl;

                cout << "Enter Book ID: ";
                cin >> book[i].bookId;

                cout << "Enter Book Name: ";
                cin >> book[i].bookName;

                cout << "Enter Author Name: ";
                cin >> book[i].authorName;

                cout << "Enter Number of Copies: ";
                cin >> book[i].copies;
            }
            count = count + n;
        }
        else if (choice == 2)
        {

                int id;

                cout << "Enter Book ID to Issue: ";
                cin >> id;

                for (i = 0; i < count; i++)
                {
                    if (book[i].bookId == id)
                    {
                        if (book[i].copies > 0)
                        {
                            book[i].copies--;

                            cout << "Book Issued Successfully!" << endl;
                        }
                        else
                        {
                            cout << "Book Not Available!" << endl;
                        }
                    }
                }
            }
        

        else if (choice == 3)
        {
            if (count == 0)
            {
                cout << "No record found:";
            }
            else
            {

                int id;

                cout << "Enter Book ID to Return: ";
                cin >> id;

                for (i = 0; i < count; i++)
                {
                    if (book[i].bookId == id)
                    {
                        book[i].copies++;

                        cout << "Book Returned Successfully!" << endl;
                    }
                }
            }
        }

        else if (choice == 4)
        {
            if (count == 0)
            {
                cout << "NO record found";
            }
            else
            {

                int id;
                int updateChoice;

                cout << "Enter Book ID to Update: ";
                cin >> id;

                for (i = 0; i < count; i++)
                {
                    if (book[i].bookId == id)
                    {
                        cout << "\n1. Update Book Name";
                        cout << "\n2. Update Author Name";
                        cout << "\n3. Update Copies";

                        cout << "\nEnter Your Choice: ";
                        cin >> updateChoice;

                        if (updateChoice == 1)
                        {
                            cout << "Enter New Book Name: ";
                            cin >> book[i].bookName;
                        }
                        else if (updateChoice == 2)
                        {
                            cout << "Enter New Author Name: ";
                            cin >> book[i].authorName;
                        }
                        else if (updateChoice == 3)
                        {
                            cout << "Enter New Number of Copies: ";
                            cin >> book[i].copies;
                        }
                        else
                        {
                            cout << "Invalid Choice!" << endl;
                        }
                    }
                }
            }
        }
        else if(choice == 5)
        {
            if(count==0){
                cout<<"NO record found";

            }
            else{

            

            for(i = 0; i < n; i++)
            {
                cout << "\nBook " << i + 1 << endl;
                cout << "Book ID: " << book[i].bookId << endl;
                cout << "Book Name: " << book[i].bookName << endl;
                cout << "Author Name: " << book[i].authorName << endl;
                cout << "Available Copies: " << book[i].copies << endl;
            }
        }
    }
    

        else if(choice == 6)
        {
            cout << "Exited successfully" << endl;
            break;
        }

        else
        {
            cout << "Invalid Choice!" << endl;
            break;
        }
    }
}




    
