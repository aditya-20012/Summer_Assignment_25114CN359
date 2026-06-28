#include <iostream>
using namespace std;
struct contact
{
    long long mobile_no;
    string name;
    string email;
};
int main()
{
    cout << "***** Welcome to Contact management system *****" << endl;
    struct contact c[100];
    int choice, n, i, count = 0;
    string s_name;
    bool found;
    while (true)
    {
        cout << "1.Add contact\n2.View contacts\n3.Search contact \n4.Update contact\n5.Total no of contacts\n6.Exit\n";
        cout << "Enter the choice:";
        cin >> choice;
        if (choice == 1)
        {
            cout << "Enter number of contacts:";
            cin >> n;
            for (i = count; i < count + n; i++)
            {
                cout << "Enter mobile _no,name,email:";
                cin >> c[i].mobile_no;
                cin >> c[i].name;
                cin >> c[i].email;
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
                    cout << "MobileNo:" << c[i].mobile_no << endl;
                    cout << "Name:" << c[i].name << endl;
                    cout << "Email Id:" << c[i].email << endl;
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
                cout << "Enter name to be searched:";
                cin >> s_name;
                for (i = 0; i < count; i++)
                {
                    if (c[i].name == s_name)
                    {
                        cout << c[i].mobile_no << endl;
                        cout << c[i].email << endl;
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
                cout << "Enter name to be searched";
                cin >> s_name;
                for (i = 0; i < count; i++)
                {
                    if (c[i].name == s_name){
                        string new_name;
                        string new_email;
                        cout<<"Enter new name:";
                        cin>>new_name;
                        cout<<"Enter new email:";
                        cin>>new_email;
                        c[i].name=new_name;
                        c[i].email=new_email;
                        cout<<"Updation successfull\nUpdated details are:\n";
                        cout<<"Name:"<<c[i].name<<endl;
                        cout<<"Marks:"<<c[i].email<<endl;
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
            if(count==0){
                cout<<"No record found:\n";

            }
            else{
                cout<<"Total no of contacts are:"<<count;
            }
        }
        else if (choice==6){
            cout<<"Exited successfully";
            break;
        }
        else{
            cout<<"Invalid option";
            break;
        }
        
    }
}
