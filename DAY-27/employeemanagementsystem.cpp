#include <iostream>
using namespace std;
struct Employee
{
    int id;
    string name;
    int salary;
};
int main()
{
    cout << "***** Welcome to Employee management system *****" << endl;
    struct Employee e[100];
    int choice, n, i,count=0,s_id;
    bool found;
    while (true)
    {
        cout << "1.Add employee\n2.View All employees\n3.Search Employee\n4.Update employee\n5.Exit\n";
        cout << "Enter the choice:";
        cin >> choice;
        if(choice==1){
            cout<<"Enter number of employee";
            cin>>n;
            for(int i=count;i<count+n;i++){
               cout<<"Enter id,name,salary:";
               cin>>e[i].id;
               cin>>e[i].name;
               cin>>e[i].salary;
            }
            count=count+n;
        }
        else if(choice==2){
            if(count==0){
                cout<<"No record found\n";
            }
            else{
                for(int i=0;i<count;i++){
                 cout<<"Id:"<<e[i].id<<endl;
                 cout<<"Name:"<<e[i].name<<endl;
                 cout<<"Salary:"<<e[i].salary<<endl;
                }

            }
        }
        else if(choice==3){
            if(count==0){
                cout<<"No record found\n";
            }
            else{
                cout<<"Enter id to be searched";
                cin>>s_id;
                for(i=0;i<count;i++){
                    if(e[i].id==s_id){
                        cout<<e[i].name<<endl;
                        cout<<e[i].salary<<endl;
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
                cout<<"Enter id:";
                cin>>s_id;
                for(i=0;i<count;i++){
                    if(e[i].id==s_id){
                        string new_name;
                        int new_salary;
                        cout<<"Enter new name";
                        cin>>new_name;
                        cout<<"Enter new salary";
                        cin>>new_salary;
                        e[i].name=new_name;
                        e[i].salary=new_salary;
                        cout<<"Updation successfull\nUpdated details are:\n";
                        cout<<"Name:"<<e[i].name<<endl;
                        cout<<"Marks:"<<e[i].salary<<endl;
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