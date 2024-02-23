#include <iostream>
using namespace std;

class BankAccount{
    long acc_no[100];
    string name[100];
    double balance[100];
    int total_acc;
public: 
    void create_acc(){
        int no;
        cout<<"Enter no of accounts: ";cin>>no;
        for(int i=0;i<no;i++){
        static int total_acc=0;total_acc++;this->total_acc=total_acc;
        cout<<"Enter acc no.: ";cin>>acc_no[i];
        cout<<"Enter  name  : ";getline(cin,name[i]);getline(cin,name[i]);
        cout<<"balance      : ";cin>>balance[i];
        cout<<"ACCOUNT "<<i+1<<": "<<acc_no[i]<<" "<<name[i]<<" "<<" "<<balance[i]<<" successfully created✓\n\n";}
    }
    void print_all_accounts(){
        
        for(int a=0;a<total_acc;a++){
            cout<<"\n"<<a+1<<". "<<acc_no[a]<<" "<<name[a]<<" "<<balance[a]<<"\n\n";
        }
    }
    int get_total_acc(){
        return total_acc;
    }
};

int main(){
    BankAccount b1,b2,b3;
    b1.create_acc();
    b1.print_all_accounts();
    int n=b1.get_total_acc();
    cout<<"total accL "<<n<<"\n";
    
}
