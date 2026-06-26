#include <iostream>
using namespace std;
int main()
{
    cout << "***** Welcome to ATM Simuation *****" << endl;
    int s1 = 1234;
    int pin;
    int new_pin;
    int balance=50000;
    int c, i, a=0;
    int amount;
    cout << "1.Check balance" << endl;
    cout << "2.Cash Withdrawl" << endl;
    cout << "3.Cash Deposit" << endl;
    cout << "4.Change pin" << endl;
    cout << "5.Exit" << endl;
    cout << "Enter choice:";
    cin >> c;
    switch (c)
    {
    case 1:
        while (a < 2)
        {
            cout << "Enter PIN: ";
            cin >> pin;

            if (pin == s1)
            {
                cout << "PIN correct."<<endl;
                 cout<<"Balance:"<<balance;
                break;
            }
            else
            {
                a++;
                cout << "Incorrect PIN!"<<endl;
            }
        }

        if (a == 2)
        {
            cout << "Too many failed attempts"<<endl;
            exit(0);
        }

        break;
        
    case 2:
    while (a < 2)
        {
            cout << "Enter PIN: ";
            cin >> pin;

            if (pin == s1)
            {
                cout << "PIN correct."<<endl;
                cout<<"Enter amount to be withdrawl:";
                cin>>amount;
                if(amount<=balance){
                    balance=balance-amount;
                    cout<<"Collect your cash"<<endl;
                    cout<<"Withdrawl successful"<<endl;
                    cout<<"Updated balance:"<<balance;
                }
                else{
                    cout<<"Insufficent balance";
                }
                break;
            }
            else
            {
                a++;
                cout << "Incorrect PIN!"<<endl;
            }
        }

        if (a == 2)
        {
            cout << "Too many failed attempts"<<endl;
            exit(0);
        }
        break;
        case 3:
        while (a < 2)
        {
            cout << "Enter PIN: ";
            cin >> pin;

            if (pin == s1)
            {
                cout << "PIN correct."<<endl;
                cout<<"Enter amount to be deposited:";
                cin>>amount;
                balance=balance+amount;
                cout<<"Deposit successful"<<endl;
                cout<<"Updated Balance"<<balance;
                
                break;
            }
            else
            {
                a++;
                cout << "Incorrect PIN!"<<endl;
            }
        }

        if (a == 2)
        {
            cout << "Too many failed attempts"<<endl;
            exit(0);
        }
        break;
        case 4:
         while (a < 2)
        {
            cout << "Enter PIN: ";
            cin >> pin;

            if (pin == s1)
            {
                cout << "PIN correct."<<endl;
                cout<<"Enter new pin:";
                cin>>new_pin;
                s1=new_pin;
                cout<<"Updated successfully";

                 
                break;
            }
            else
            {
                a++;
                cout << "Incorrect PIN!"<<endl;
            }
        }

        if (a == 2)
        {
            cout << "Too many failed attempts"<<endl;
            exit(0);
        }
        break;
        case 5:
        cout<<"Exit";
        break;
        default:
         cout<<"Invalid option";






   

    }
    

}

