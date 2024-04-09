#include <iostream>
using namespace std;
class Account{

public: 
    long long account_no;
    double balance;
public: 
    Account(){
        cout<<"Account Constructor called\nEnter Account no: ";cin>>account_no;
        cout<<"Initialise your account balance: "; cin>>balance;
    }
    void deposit(){
        double money;
        cout<<"Enter amount to deposit: "; cin>>money;
        balance+=money;
    }
    
};

class savingsAccount: Account{
    double interest_rate;
    string name;
    string DOB;
public: 
    savingsAccount() : Account(){
        cout<<"Saving account constructor called\nYour saving account interest rate: "; cin>>interest_rate;
        cout<<"Account Holder name: "; cin>>name;
        cout<<"date_of_birth (dd-mm-yyyy): ";cin>>DOB;
    }
    
    void deposit(){
        int money;
        cout<<"You are in deposit zone: \nEnter amount to deposit: "; cin>>money;
        balance+=money;
        cout<<money<<" deposited successfully, New Balance: "<<balance<<"\n\n";
    }
    void withdraw(){
        int money;
        cout<<"You are in withdrawal zone:\nEnter amount to withdraw: "; cin>>money;
        balance-=money;
        cout<<money<<" Withdrawal successfully, New Balance: "<<balance<<"\n\n";
    }
    
    void balance_display(){
        cout<<name<<",Your account balance: "<<balance<<endl;
    }
};

int main() {
    savingsAccount Avadh_savings;
    Avadh_savings.deposit();
    Avadh_savings.withdraw();
    Avadh_savings.balance_display();

    return 0;
}
