
#include <iostream>
using namespace std;

int gcd(int a, int b){
    if(a==b){
        return a;
    }
    else if(a>b){
        a=a-b;
    }
    else{
        b=b-a;
    }
    a=gcd(a,b);
    return a;
}

int main() {
    int a, b;
    cout<<"Enter two numbers for gcd: ";cin>>a>>b;
    cout<<"gcd: "<<gcd(a,b)<<"\n";
    return 0;
}
