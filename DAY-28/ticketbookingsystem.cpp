#include <iostream>
using namespace std;

struct ticket
{
    int ticket_id;
    string passenger_name;
    string source;
    string destination;
};

int main()
{
    cout << "***** Welcome to Ticket Booking System *****" << endl;

    struct ticket t[100];

    int choice, n, i, count = 0;
    int s_id;
    bool found = false;

    while (true)
    {
        cout << "\n1.Add Ticket";
        cout << "\n2.View Tickets";
        cout << "\n3.Search Ticket";
        cout << "\n4.Update Ticket";
        cout << "\n5.Total No of Tickets";
        cout << "\n6.Exit";

        cout << "\nEnter the choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter number of tickets: ";
            cin >> n;

            for (i = count; i < count + n; i++)
            {
                cout << "\nEnter details of Ticket " << i + 1 << endl;

                cout << "Enter Ticket ID: ";
                cin >> t[i].ticket_id;

                cout << "Enter Passenger Name: ";
                cin >> t[i].passenger_name;

                cout << "Enter Source: ";
                cin >> t[i].source;

                cout << "Enter Destination: ";
                cin >> t[i].destination;
            }

            count = count + n;

            cout << "\nTicket Added Successfully!\n";
        }

        else if (choice == 2)
        {
            if (count == 0)
            {
                cout << "No record found\n";
            }
            else
            {
                for (i = 0; i < count; i++)
                {
                    cout << "\nTicket ID: " << t[i].ticket_id << endl;
                    cout << "Passenger Name: " << t[i].passenger_name << endl;
                    cout << "Source: " << t[i].source << endl;
                    cout << "Destination: " << t[i].destination << endl;
                }
            }
        }
        else if (choice == 3)
        {
            if (count == 0)
            {
                cout << "No record found\n";
            }
            else
            {
                found = false;

                cout << "Enter Ticket ID to be searched: ";
                cin >> s_id;

                for (i = 0; i < count; i++)
                {
                    if (t[i].ticket_id == s_id)
                    {
                        cout << "Passenger Name: " << t[i].passenger_name << endl;
                        cout << "Source: " << t[i].source << endl;
                        cout << "Destination: " << t[i].destination << endl;

                        found = true;
                        break;
                    }
                }

                if (found == false)
                {
                    cout << "No record found\n";
                }
            }
        }

        else if (choice == 4)
        {
            if (count == 0)
            {
                cout << "No record found\n";
            }
            else
            {
                found = false;

                cout << "Enter Ticket ID to be searched: ";
                cin >> s_id;

                for (i = 0; i < count; i++)
                {
                    if (t[i].ticket_id == s_id)
                    {
                        cout << "Enter New Passenger Name: ";
                        cin >> t[i].passenger_name;

                        cout << "Enter New Source: ";
                        cin >> t[i].source;

                        cout << "Enter New Destination: ";
                        cin >> t[i].destination;

                        cout << "\nUpdation Successful\n";
                        cout << "Updated Details are:\n";

                        cout << "Ticket ID: " << t[i].ticket_id << endl;
                        cout << "Passenger Name: " << t[i].passenger_name << endl;
                        cout << "Source: " << t[i].source << endl;
                        cout << "Destination: " << t[i].destination << endl;

                        found = true;
                        break;
                    }
                }

                if (found == false)
                {
                    cout << "No record found\n";
                }
            }
        }

        else if (choice == 5)
        {
            if (count == 0)
            {
                cout << "No record found\n";
            }
            else
            {
                cout << "Total No of Tickets are: " << count << endl;
            }
        }

        else if (choice == 6)
        {
            cout << "Exited Successfully";
            break;
        }

        else
        {
            cout << "Invalid Option";
            break;
        }
    }

    return 0;
}
    
