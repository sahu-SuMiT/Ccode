//7.481= 1 cubic foot.... take input in gallons and display the number of feet
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    float gallons;
    cout<<"Enter the number of gallons: ";
    cin>>gallons;

    float feet = 1/7.481;
    feet = feet*gallons;

    cout<<"No. of cubic feet: "<<feet<<endl;
}
