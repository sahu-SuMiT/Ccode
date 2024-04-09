#include <iostream>
using namespace std;

class father{
protected:
    string name; 
public:
    void house(){
        cout<<"Have own 2BHK house\n";
    }
};

class son : private father{
    
    public:
    void car(){
        cout<<"Have own Audi car\n";
    }
    void son_house(){
        house();
    }
    
};

int main() {
    son Sumit;
    Sumit.son_house();
    Sumit.car();

    return 0;
}
