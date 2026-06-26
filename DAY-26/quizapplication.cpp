#include <iostream>
using namespace std;
int main()
{
    cout << "***** Welcome to Quiz application *****" << endl;
    int choice,score=0;
    char ans;
    while(true){
        cout<<"1.Start the quiz"<<endl;
        cout<<"2.Exit"<<endl;
        cout<<"Enter the choice:";
        cin>>choice;
        if(choice==1){
            cout<<"Q-1.Which header file is required to use cout and cin?"<<endl<<"A.<math.h>\nB.<string>\nC.<iostream>\nD.<fstream>\n";
            cout<<"Enter answer option:";
            cin>>ans;
            if((ans=='c')||(ans=='C')){
                score++;
            }
            else{
                cout<<"Wrong Answer\n";
            }
            cout<<"Q-2.Which loop is guaranteed to execute at least once?\nA.for\nB.while\nC.Do while\nD.Nested loop\n";
            cout<<"Enter answer option:";
            cin>>ans;
            if((ans=='c')||(ans=='C')){
                score++;
            }
            else{
                cout<<"Wrong Answer\n";
            }
            cout<<"Q-3.Which operator is used to compare two values for equality in C++?\nA.=\nB.==\nC.!=\nD.>=\n";
            cout<<"Enter answer option:";
            cin>>ans;
            if((ans=='B')||(ans=='b')){
                score++;
            }
            else{
                cout<<"Wrong Answer\n";
            }
            
            cout<<"Q-4.Which data type is used to store decimal numbers in C++?\nA.float\nB.int\nC.char\nD.bool\n";
            cout<<"Enter answer option:";
            cin>>ans;
            if((ans=='A')||(ans=='a')){
                score++;
            }
            else{
                cout<<"Wrong Answer\n";
            }
            cout<<"Score:"<<score<<endl;
        }
        else if(choice==2){
            cout<<"Exited the loop successfully";
            break;
        }
        else{
           cout<<"Invalid option";
           break;
        }

    }
}
