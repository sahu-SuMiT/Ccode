#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    float p,r,t,n;
    cout<<"Enter the principal amount: ";
    cin>>p;
    cout<<"Enter the rate: ";
    cin>>r;r=r/100;
    cout<<"Enter the time in years: ";
    cin>>t;
    cout<<"Enter the number of times interest is compounded in the time duration: ";
    cin>>n;

    float amount = p * pow(1+r/n,n*t);

    cout<<"The final amount: "<<fixed<<setprecision(2)<<amount<<endl;

}
//p(1+r/n)^nt where r is in decimals
