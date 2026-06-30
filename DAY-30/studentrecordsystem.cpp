#include <iostream>
using namespace std;

struct Student {
    int roll;
    string name;
    int marks;
};

int main() {
    cout << "***** Welcome to Mini Student Record System *****" << endl;
    Student s[100];   // fixed size array
    int choice, n, count = 0, roll_no;

    while (true) {
        cout << "\n1. Add Students\n2. View All Students\n3. Search Student\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter number of students to add: ";
            cin >> n;
            for (int i = count; i < count + n; i++) {
                cout << "Enter Roll, Name, Marks: ";
                cin >> s[i].roll;
                cin.ignore();
                getline(cin,s[i].name);
                cin>>s[i].marks;

            }
            count += n;
            cout << "Students added successfully!\n";
        }

        else if (choice == 2) {
            if (count == 0) {
                cout << "No records found!\n";
            } else {
                cout << "\n--- Student Records ---\n";
                for (int i = 0; i < count; i++) {
                    cout << "Roll: " << s[i].roll << endl;
                    cout << "Name: " << s[i].name << endl;
                    cout << "Marks: " << s[i].marks << endl;
                    cout << "----------------------\n";
                }
            }
        }

        else if (choice == 3) {
            if (count == 0) {
                cout << "No records found!\n";
            } else {
                cout << "Enter Roll No to search: ";
                cin >> roll_no;
                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (s[i].roll == roll_no) {
                        cout << "Student Found!\n";
                        cout << "Name: " << s[i].name << endl;
                        cout << "Marks: " << s[i].marks << endl;
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "No record found!\n";
                }
            }
        }

        else if (choice == 4) {
            cout << "Exited successfully!\n";
            break;
        }

        else {
            cout << "Invalid choice!\n";
        }
    }
    return 0;
}
