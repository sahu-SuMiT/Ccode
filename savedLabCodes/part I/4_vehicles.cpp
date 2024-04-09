
#include <iostream>
using namespace std;

class Vehicle{
public:
    int brand_model;
    int year;
public: 
    Vehicle(){
        cout<<"Vehicle Constructor called\nEnter brand_model:";cin>>brand_model;
        cout<<"Enter vehicle year:";cin>>year;
        cout<<"Vehicle data set\n\n";
    }
    ~Vehicle(){
        cout<<"Vehicle destructor called\n";
    }
};
class Car : public Vehicle{
    int numDoors;
    int engine_capacity;
public:
    Car():Vehicle(){
        cout<<"Car constructor called\nEnter numDoors:"; cin>>numDoors;
        cout<<"car engine_capacity:";cin>>engine_capacity;
        cout<<"Car data set\n\n"<<endl;
    }
    ~Car(){
        cout<<"Car destructor called\n";
    }
    void display(){
        cout<<"Displaying car details\nbrand_model:"<<brand_model<<"\nyear:"<<year<<"\nnumDoors:"<<numDoors<<"\nengine_capacity:"<<engine_capacity<<endl;
    }

    
};
int main() {
    Car maruti;
    maruti.display();

    return 0;
}
