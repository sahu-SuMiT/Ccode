
#include <iostream>
class shape{
public:
    String name;
public:
    shape(){
        cout<<"Enter which shape:"; cin>>shape;
    }
    shape(string input):name(input){};
    
    void get_shape(){
        cout<<"your shape is "<<name<<endl;
    }
};

class Rectangle : public shape{
    double length;
    double width;
public:
    Rectangle() : shape(){
        cout<<"length:";cin>>length;
        cout<<"width:"; cin>>width;
        cout<<"Rectangle data set\n\n";
    }
    Rectangle(): shape(double l, double w):length(l),width(w){
        length=l; width=w;
        cout<<"Rectangle data set with length and width: "<<length<<" & "<<width<<endl;
    }
    
    void area(){
        cout<<name<<" AREA: "<<length * width<<"\n";
    }
    void perimeter(){
        cout<<name<<" PERIMETER: "<< 2*(length+width)<<endl;
    }
};
int main() {
    Rectangle r1;
    Rectangle r2(10,15.5);
    r.area();
    r2.area();

    return 0;
}