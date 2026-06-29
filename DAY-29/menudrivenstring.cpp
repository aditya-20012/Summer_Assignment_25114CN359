#include <iostream>
#include<string>
using namespace std;
int main()
{
    cout << "***** Welcome to Menu Driven String Operations System *****" << endl;
    string s1;
    cout<<"Enter string:";
    getline(cin,s1);
    while(true){
        int choice;
        cout<<"1.Find length\n2.Copy String\n3.Concatenate string\n4.Compare string\n5.Reverse string\n6.Exit";
        cout<<"\nEnter choice:";
        cin>>choice;
        if(choice==1){
            int length;
            length=s1.length();
            cout<<"Length of string:"<<length<<endl;;
        }
        else if(choice==2){
          string s2;
           s2=s1;
           cout<<"Copied string:"<<s2<<endl;
        }
       else if(choice==3){
        string s;
        cout<<"Enter string to concatenate";
        cin.ignore();
        getline(cin,s);
        s1=s1+s;
        cout<<"Concatented string:"<<s1<<endl;

       }
       else if(choice==4){
        string cs;
        cout<<"Enter string to compare:";
        cin.ignore();
        getline(cin,cs);
        if(cs==s1){
            cout<<"String are equal"<<endl;

        }
        else{
            cout<<"String are not equal"<<endl;
        }

       }
       else if(choice==5){
        string rev;
        for(int i=s1.length()-1;i>=0;i--){
            rev=rev+s1[i];
        }
        cout<<"Reversed string:"<<rev<<endl;
       }
       else if(choice==6){
        cout<<"Exited successfully";
        break;
       }
       else{
        cout<<"Invalid option";
        break;
       }
    }
}