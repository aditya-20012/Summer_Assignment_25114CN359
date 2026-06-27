#include <iostream>
using namespace std;

struct Employee
{
    int id;
    string name;
    float basic_salary;
    float bonus;
};

int main()
{
    cout << "***** Welcome to Salary Management System *****" << endl;

    Employee e[100];
    int choice, n, count = 0, emp_id;

    while (true)
    {
        cout << "\n1. Add Employee";
        cout << "\n2. Generate Salary Slip";
        cout << "\n3. Search Employee";
        cout << "\n4. View All Employees";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter number of employees: ";
            cin >> n;

            for (int i = count; i < count + n; i++)
            {
                cout << "\nEnter Employee ID: ";
                cin >> e[i].id;

                cout << "Enter Name: ";
                cin >> e[i].name;

                cout << "Enter Basic Salary: ";
                cin >> e[i].basic_salary;

                cout << "Enter Bonus: ";
                cin >> e[i].bonus;
            }

            count = count + n;
        }

        else if (choice == 2)
        {
            if (count == 0)
            {
                cout << "No employee record found.\n";
            }
            else
            {
                bool found = false;

                cout << "Enter Employee ID: ";
                cin >> emp_id;

                for (int i = 0; i < count; i++)
                {
                    if (e[i].id == emp_id)
                    {
                        float total_salary = e[i].basic_salary + e[i].bonus;

                        cout << "Employee ID : " << e[i].id << endl;
                        cout << "Name        : " << e[i].name << endl;
                        cout << "Basic Salary: " << e[i].basic_salary << endl;
                        cout << "Bonus       : " << e[i].bonus << endl;
                        cout << "Total Salary: " << total_salary << endl;

                        found = true;
                        break;
                    }
                }

                if (!found)
                {
                    cout << "Employee not found.\n";
                }
            }
        }

        else if (choice == 3)
        {
            if (count == 0)
            {
                cout << "No employee record found.\n";
            }
            else
            {
                bool found = false;

                cout << "Enter Employee ID: ";
                cin >> emp_id;

                for (int i = 0; i < count; i++)
                {
                    if (e[i].id == emp_id)
                    {
                        cout << "Employee ID : " << e[i].id << endl;
                        cout << "Name        : " << e[i].name << endl;
                        cout << "Basic Salary: " << e[i].basic_salary << endl;
                        cout << "Bonus       : " << e[i].bonus << endl;

                        found = true;
                        break;
                    }
                }

                if (!found)
                {
                    cout << "Employee not found.\n";
                }
            }
        }

        else if (choice == 4)
        {
            if (count == 0)
            {
                cout << "No employee record found.\n";
            }
            else
            {
                for (int i = 0; i < count; i++)
                {
                    cout << "\nEmployee ID : " << e[i].id << endl;
                    cout << "Name        : " << e[i].name << endl;
                    cout << "Basic Salary: " << e[i].basic_salary << endl;
                    cout << "Bonus       : " << e[i].bonus << endl;
                }
            }
        }

        else if (choice == 5)
        {
            cout << "Exited Successfully!";
            break;
        }

        else
        {
            cout << "Invalid Choice!\n";
        }
    }

}