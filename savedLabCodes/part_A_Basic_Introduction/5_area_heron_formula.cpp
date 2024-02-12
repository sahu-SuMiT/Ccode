#include <cmath>
#include <iostream>
using namespace std;
int main() {
    float a,b,c,semi,area;
    cout<<"Enter three sides of the triangle: ";cin>>a>>b>>c;
    if(a+b>c && b+c>a && a+c>b ){
        semi= (a+b+c)/2;
        area = semi*(semi-a)*(semi-b)*(semi-c);
        area = sqrt(area);
        cout<<"AREA: "<<area<<endl;
    }
    else{
        cout<<"Invalid sides"<<endl;
    }
    
    return 0;
}
