#include <iostream>
using namespace std;
struct Student
{
    int roll;
    string name;
    int english;
    int maths;
    int science;
};
int main()
{
    cout << "***** Welcome to Marksheet generation system *****" << endl;
    struct Student s[100];
    int choice, n, i, count = 0, rollno, total_marks, perc;
    char grade;
    bool found;
    while (true)
    {
        cout << "1.Add students\n2.Generate Marksheet\n3.Search Student\n4.View all student\n5.Exit\n";
        cout << "Enter the choice:";
        cin >> choice;
        if (choice == 1)
        {
            cout << "Enter number of students";
            cin >> n;
            for (i = count; i < count + n; i++)
            {
                cout << "Enter roll,name,marks of english,maths,science:";
                cin >> s[i].roll;
                cin >> s[i].name;
                cin >> s[i].english;
                cin >> s[i].maths;
                cin >> s[i].science;
            }
            count = count + 2;
        }
        else if (choice == 2)
        {
            if (count == 0)
            {
                cout << "No record found\n";
            }
            else
            {
                cout << "Enter roll no to be searched";
                cin >> rollno;
                for (i = 0; i < count; i++)
                {
                    if (s[i].roll == rollno)
                    {
                        perc = ((s[i].english + s[i].maths + s[i].science) * 100) / 300;
                        if((perc>=90)&&(perc<=100)){
                            grade='A';

                        }
                        else if((perc>=80)&&(perc<90)){
                            grade='B';
                        }
                        else if((perc>=60)&&(perc<80)){
                            grade='C';
                        }
                        else if((perc>=40)&&(perc<60)){
                            grade='D';
                        }
                        else if(perc<40){
                            grade='E';
                        }
                        cout<<"Roll no:"<<s[i].roll<<endl;
                        cout<<"Name:"<<s[i].name<<endl;
                        cout<<"Marks of English:"<<s[i].english<<endl;
                        cout<<"Marks of Maths:"<<s[i].maths<<endl;
                        cout<<"Marks of Science:"<<s[i].science<<endl;
                        cout<<"Percentage:"<<perc<<endl;
                        cout<<"Grade:"<<grade<<endl;
                        found=true;
                        break;




                    }
                }
                if(found){

                }
                else{
                    cout<<"Not found";
                }
            }
        }
        else if(choice==3){
            if(count==0){
                cout<<"No record found\n";
            }
            else{
                cout<<"Enter roll no to be searched";
                cin>>rollno;
                for(i=0;i<count;i++){
                    if(s[i].roll==rollno){
                        cout<<"Name:"<<s[i].name<<endl;
                        cout<<"Marks of english:"<<s[i].english<<endl;
                        cout<<"Marks of maths:"<<s[i].maths<<endl;
                        cout<<"Marks of science:"<<s[i].science<<endl;

                        found=true;
                        break;
                    }
                   
                }
                if(found){

                }
                else{
                    cout<<"No record found";
                }
            }
        }
        else if(choice==4){

            if(count==0){
                cout<<"No record found\n";
            }
            else{
                for(int i=0;i<count;i++){
                 cout<<"Roll:"<<s[i].roll<<endl;
                 cout<<"Name:"<<s[i].name<<endl;
                 cout<<"Marks of english:"<<s[i].english<<endl;
                 cout<<"Marks of maths:"<<s[i].maths<<endl;
                 cout<<"Marks of science:"<<s[i].science<<endl;


                }

            }

        }
        else if(choice==5){
            cout<<"Exited successfully";
            break;
        }
        else{
            cout<<"Invalid option";
            break;
        }
    }
}