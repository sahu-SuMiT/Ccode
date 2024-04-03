// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Distance{
    int feet;
    float inches;
public: 
    Distance(int f, int i):feet(f),inches(i){}
    
    Distance operator-(const Distance& obj){
        int new_distance=(feet*12+inches)-(obj.feet*12+obj.inches);
        int new_feet=new_distance/12;
        float new_inch=new_distance%12;
        return Distance(new_feet,new_inch);
    }
    
    void print(){
        cout<<feet<<"\' "<<inches<<"\"\n";
    }
};
int main() {
    Distance d1(10,9);
    d1.print();
    
    Distance d2(5,10);
    d2.print();
    
    Distance d3=d1-d2;
    d3.print();


    return 0;
}
