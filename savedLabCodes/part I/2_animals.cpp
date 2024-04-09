#include <iostream>
using namespace std;

class animal{
    
public: 
    string name;
    int age;
    string species;
public: 
    animal (){
        
        cout<<"Animal constructor called\nAnimal name: "; cin>>name;
        cout<<"age: ";cin >>age;
        cout<<"species: ";cin>>species;
    }
    ~animal(){
        cout<<"\nanimal Destructor called\n";
    }
};
class bird: private animal{
    
    double wingspan;
    double feather_size;
    double beak_size;
    double claw_size;
    bool flightless_bird;
    
public:
    bird() : animal(){
        char ch;
        cout<<"Bird constructor called\nBird name: ";cin>>name;
        cout<<"Bird age: "; cin>>age;
        cout<<"Enter wingspan: ";cin>>wingspan;
        cout<<"Enter feather_size; "; cin>>feather_size;
        cout<<"Enter beak_size: ";cin>>beak_size;
        cout<<"Enter claw_size: ";cin>>claw_size;
        cout<<"Is the bird flightless(y/n)";cin>>ch;(ch=='y')?flightless_bird=true : flightless_bird=false;
        cout<<"Bird data set\n";
    }
    ~bird(){
        cout<<"\nbird destructor called\n";
    }
    
    void print_bird(){
        cout<<"\n.......................Printing the bird details..........................\n";
        cout<<"Bird name: "<<name<<"\n";
        cout<<"Bird age: "<<age<<"\n";
        cout<<"Enter wingspan: "<<wingspan<<"\n";
        cout<<"Enter feather_size; "<<feather_size<<"\n";
        cout<<"beak_size: "<<beak_size<<"\n";
        cout<<"claw_size: "<<claw_size<<"\n";
        (flightless_bird)?cout<<"It's a flightless bird\n":cout<<"The bird is not flightless\n";
    }

};


int main() {
    bird Avadh;
    Avadh.print_bird();

    return 0;
}
