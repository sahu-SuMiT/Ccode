#include <iostream>
using namespace std;

class Circle{
protected:
    double radius;
public:
    Circle(){
        cout<<"Circle constructor called\n";
        cout<<"Enter radius of circle:";
        cin>>radius;
    }

    void get_area(){
        cout<<"Circle Area: "<<3.14*radius*radius<<endl;
    }
};

class Rectangle{
protected:
    double length;
    double width;
public:
    Rectangle(){
        cout<<"Rectangle constructor called\n";
        cout<<"Enter length & width of rectangle:";
        cin >>length>>width;
    }
    void get_area(){
        cout<<"Rectangle Area: "<<length * width <<endl;
    }
};

class Cylinder : public Circle, public Rectangle{
public:
    void cylinder_area(){
        double pi = 3.1415;
        double circumference=2*pi*radius;
        if(circumference<=length){
            cout<<"Derived cylinder has Total Surface area: "<< 2*pi*radius*(width+radius)<<endl;
        }
        else{
            cout<<"Cylinder cannot be made\n";
        }
    }
    void cylinder_volume(){
        double pi = 3.1415;
        double circumference=2*pi*radius;
        if(circumference<=length){
            cout<<"Derived cylinder has Total Volume: "<< pi*radius*radius*width<<endl;
        }
        else{
            cout<<"Cylinder cannot be made\n";
        }
    }
};

int main(){
    Cylinder c1;

    c1.cylinder_area();
    c1.cylinder_volume();

    return 0;
}
