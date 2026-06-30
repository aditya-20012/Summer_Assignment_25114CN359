#include <iostream>
using namespace std;
struct account
{
    long long acc_number;
    string name;
    long long mobile_no;
    string acc_type;
    long long balance;
};
int main()
{
    cout << "***** Welcome to Account management system *****" << endl;
    struct account a[100];
    int choice, n, i, count = 0, amount;
    long long s_acc;
    string s_name;
    bool found;
    while (true)
    {
        cout << "1.Create account\n2.View account details\n3.Deposit money\n4.Withdraw money\n5.Check balance\n6.Search account\n";
        cout << "Enter the choice:";
        cin >> choice;
        if (choice == 1)
        {
            cout << "Enter number of accounts:";
            cin >> n;
            for (i = count; i < count + n; i++)
            {
                cout << "Enter account number,name,mobile no ,account type(savings,current),balance:";
                cin >> a[i].acc_number;
                cin >> a[i].name;
                cin >> a[i].mobile_no;
                cin >> a[i].acc_type;
                cin >> a[i].balance;
            }
            count = count + n;
        }
        else if (choice == 2)
        {
            if (count == 0)
            {
                cout << "No record found\n";
            }
            else
            {
                for (int i = 0; i < count; i++)
                {
                    cout << "Account no:" << a[i].acc_number << endl;
                    cout << "Name of account holder:" << a[i].name << endl;
                    cout << "Mobile no:" << a[i].mobile_no << endl;
                    cout << "Account Type:" << a[i].acc_type << endl;
                    cout << "Balance:" << a[i].balance << endl;
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
                cout << "Enter acc number:";
                cin >> s_acc;
                for (i = 0; i < count; i++)
                {
                    if (a[i].acc_number == s_acc)
                    {
                        cout << "Enter deposit amount:";
                        cin >> amount;
                        a[i].balance = a[i].balance + amount;
                        cout << "Deposit successfull!";
                        found = true;
                        break;
                    }
                    else
                    {
                        found = false;
                        cout << "No record found";
                        break;
                    }
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
                cout << "Enter acc number:";
                cin >> s_acc;
                for (i = 0; i < count; i++)
                {
                    if (a[i].acc_number == s_acc)
                    {
                        long long withdraw;
                        cout<<"Enter withdraw amount:";
                        cin>>withdraw;
                        if(withdraw>a[i].balance){
                            cout<<"Withdraw unsuccessful";

                        }
                        else{
                            a[i].balance=a[i].balance-withdraw;
                            cout<<"Withdrawn successful";
                        }
                        found=true;
                        break;

                    }
                    else{
                        found=false;
                        cout<<"No record found";
                        break;
                    }
                }
            }
        }
        else if(choice==5){
            if (count == 0)
            {
                cout << "No record found\n";
            }
            else{
                cout << "Enter acc number:";
                cin >> s_acc;
                for (i = 0; i < count; i++)
                { if(a[i].acc_number==s_acc){
                    cout<<"Balance:"<<a[i].balance<<endl;
                    found=true;
                    break;

                }
                else{
                    found=false;
                    cout<<"No record";
                    break;
                }

                }
            }

        }
        else if(choice==6){
            if (count == 0)
            {
                cout << "No record found\n";
            }
            else{
                cout << "Enter acc number:";
                cin >> s_acc;
                for(i=0;i<count;i++){
                    if(a[i].acc_number==s_acc){
                        cout<<"Account exist";
                        found=true;
                        break;

                    

                    }
                    else{
                        found=false;
                        cout<<"Account do not exist"<<endl;
                    }
                }
            }


        }
        else{
            cout<<"Invalid option";
            break;
        }
    }
}
