#include <iostream>
using namespace std;

struct Employee {
    int id;
    string name;
    int salary;
};

int main() {
    cout << "***** Welcome to Mini Employee Management System *****" << endl;
    Employee e[100];
    int choice, n, count = 0, s_id;

    while (true) {
        cout << "\n1. Add Employee\n2. View All Employees\n3. Search Employee\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter number of employees to add: ";
            cin >> n;
            for (int i = count; i < count + n; i++) {
                cout << "Enter ID, Name, Salary: ";
                cin >> e[i].id;
                cin.ignore();
                getline(cin,e[i].name);
                cin>>e[i].salary;
            }
            count += n;
            cout << "Employees added successfully!\n";
        }

        else if (choice == 2) {
            if (count == 0) {
                cout << "No records found!\n";
            } else {
                cout << "\n--- Employee Records ---\n";
                for (int i = 0; i < count; i++) {
                    cout << "ID: " << e[i].id << endl;
                    cout << "Name: " << e[i].name << endl;
                    cout << "Salary: " << e[i].salary << endl;
                    cout << "----------------------\n";
                }
            }
        }

        else if (choice == 3) {
            if (count == 0) {
                cout << "No records found!\n";
            } else {
                cout << "Enter ID to search: ";
                cin >> s_id;
                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (e[i].id == s_id) {
                        cout << "Employee Found!\n";
                        cout << "Name: " << e[i].name << endl;
                        cout << "Salary: " << e[i].salary << endl;
                        found = true;
                        break;
                    }
                }
                if (!found) {
                   }   cout << "No record found!\n";
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
