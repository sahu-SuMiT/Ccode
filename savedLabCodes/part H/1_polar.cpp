// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
using namespace std;

class Polar{
private:
    double radius;
    double theta;

public:
    Polar(double r, double angle):radius(r),theta(angle){}
    Polar operator+(const Polar& obj){
        double x1 = radius * cos(theta);
        double x2 = obj.radius * cos(obj.theta);
        double y1 = radius *sin(theta);
        double y2 = obj.radius * sin(obj.theta);
        
        //adding in cartesian form
        double new_x_coordinate = x1 + x2;
        double new_y_coordinate = y1 + y2;
        
        //convert back to polar
        double new_radius = sqrt(new_x_coordinate*new_x_coordinate + new_y_coordinate*new_y_coordinate);
        double new_theta=atan2(new_y_coordinate,new_x_coordinate);
        Polar res(new_radius,new_theta);
        return res;
    }
    
    void print(){
        cout<<"("<<radius<<","<<theta<<")\n";
        
    }
};
    
    



int main() {
    double pi=2*acos(0.0);
    Polar p1(3,0);
    p1.print();
    
    Polar p2(4,pi/2);
    p2.print();
    
    Polar p3=p1+p2;
    p3.print();
    return 0;
}
