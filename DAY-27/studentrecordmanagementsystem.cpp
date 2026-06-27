#include <iostream>
using namespace std;
struct Student
{
    int roll;
    string name;
    int marks;
};
int main()
{
    cout << "***** Welcome to Student record management system *****" << endl;
    struct Student s[100];
    int choice, n, i,count=0,roll_no;
    bool found;
    while (true)
    {
        cout << "1.Add students\n2.View All students\n3.Search Student\n4.Update student\n5.Exit\n";
        cout << "Enter the choice:";
        cin >> choice;
        if(choice==1){
            cout<<"Enter number of students";
            cin>>n;
            for(int i=count;i<count+n;i++){
               cout<<"Enter roll,name,marks:";
               cin>>s[i].roll;
               cin>>s[i].name;
               cin>>s[i].marks;
            }
            count=count+n;
        }
        else if(choice==2){
            if(count==0){
                cout<<"No record found\n";
            }
            else{
                for(int i=0;i<count;i++){
                 cout<<"Roll:"<<s[i].roll<<endl;
                 cout<<"Name:"<<s[i].name<<endl;
                 cout<<"Marks:"<<s[i].marks<<endl;
                }

            }
        }
        else if(choice==3){
            if(count==0){
                cout<<"No record found\n";
            }
            else{
                cout<<"Enter roll no to be searched";
                cin>>roll_no;
                for(i=0;i<count;i++){
                    if(s[i].roll==roll_no){
                        cout<<s[i].name<<endl;
                        cout<<s[i].marks<<endl;
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
                cout<<"Enter roll no:";
                cin>>roll_no;
                for(i=0;i<count;i++){
                    if(s[i].roll==roll_no){
                        string new_name;
                        int new_marks;
                        cout<<"Enter new name";
                        cin>>new_name;
                        cout<<"Enter new marks";
                        cin>>new_marks;
                        s[i].name=new_name;
                        s[i].marks=new_marks;
                        cout<<"Updation successfull\nUpdated details are:\n";
                        cout<<"Name:"<<s[i].name<<endl;
                        cout<<"Marks:"<<s[i].marks<<endl;
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

   
             
        
   