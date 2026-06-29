#include <iostream>
using namespace std;
struct Product
{
    long long id;
    string name;
    int quantity;
    float price;
};
int main()
{
    cout << "***** Welcome to Inventory Management system *****" << endl;
    struct Product p[100];
    int choice, n, i, count = 0;
    bool found;
    while (true)
    {
        cout << "1.Add product\n2.View product\n3.Search product \n4.Update product\n5.Total quantity of each product\n6.Exit\n";
        cout << "Enter the choice:";
        cin >> choice;
        if (choice == 1)
        {
            cout << "Enter no of products:";
            cin >> n;
            for (i = count; i < count + n; i++)
            {
                cout << "Enter id,name,quantity,price of one product:";
                cin >> p[i].id;
                cin.ignore();
                getline(cin, p[i].name);
                cin >> p[i].quantity;
                cin >> p[i].price;
            }
            count = count + n;
            cout << "Addition successful" << endl;
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
                    cout << "Product id:" << p[i].id<<endl;
                    cout << "Name:" << p[i].name<<endl;
                    cout << "Quantity:" << p[i].quantity<<endl;
                    cout << "Price of one " << p[i].name << ":" << p[i].price<<endl;
                }
            }
        }
        else if (choice == 3)
        {
            if (count == 0)
            {
                cout << "No record found" << endl;
            }
            else
            {
                long long s_id;
                cout << "Enter id to search:";
                cin >> s_id;
                for(i=0;i<count;i++){
                    if(p[i].id==s_id){
                        cout<<"Product exist.The details are:"<<endl;
                        cout << "Name:" << p[i].name<<endl;
                        cout << "Quantity:" << p[i].quantity<<endl;
                        cout << "Price of one " << p[i].name << ":" << p[i].price<<endl;
                        found=true;
                        break;

                    }
                    else{
                        found=false;
                    }
                    
                }
                if(found==false){
                    cout<<"Product do not exist"<<endl;
                }
                else{
                    cout<<"Product exist"<<endl;
                }
                
            }
        }
        else if(choice==4){
            if (count == 0)
            {
                cout << "No record found" << endl;
            }
            else{
                long long s_id;
                cout << "Enter id to search:";
                cin >> s_id;
                for(i=0;i<count;i++){
                    if(p[i].id==s_id){
                        int c;
                        cout<<"1.Update product name\n";
                        cout<<"2.Update product quantity\n";
                        cout<<"3.Update product price\n";
                        cout<<"4.Update all product details\n";
                        cout<<"Enter choice:";
                        cin>>c;
                        if(c==1){
                            cout<<"Enter updated product name:";
                            cin.ignore();
                            getline(cin,p[i].name);
                        }
                        else if(c==2){
                            cout<<"Enter updated product quantity:";
                            cin>>p[i].quantity;
                        }
                        else if(c==3){
                            cout<<"Enter updated product price:";
                            cin>>p[i].price;

                        }
                        else if(c==4){
                            cout<<"Enter updated product name:";
                            cin.ignore();
                            getline(cin,p[i].name);
                            cout<<"Enter updated product quantity:";
                            cin>>p[i].quantity;
                            cout<<"Enter updated product price:";
                            cin>>p[i].price;



                        }
                        found=true;
                        break;

                    }
                    else{
                        found=false;
                    }
                    
                }
                if(found==false){
                    cout<<"No product exist\n";

                }
                else{
                    cout<<"product exist\n";
                }
            }

        }
        else if(choice==5){
            if(count==0){
                cout<<"No record found\n";
            }
            else{
                for(i=0;i<count;i++){
                    cout<<"Total quantity of "<<p[i].name<<'-'<<p[i].quantity<<endl;
                }
            }
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
