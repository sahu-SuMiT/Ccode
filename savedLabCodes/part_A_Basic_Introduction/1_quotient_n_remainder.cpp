#include <iostream>
using namespace std;
int main() {

    int quotient; int remainder;
    int divident;int divisor;
    cout<<"Enter divident: ";cin>>divident;
    cout<<"Enter divisor: ";cin>>divisor;
    quotient = divident/divisor;
    remainder = divident % divisor;
    cout<<"Quotient: "<<quotient<<" "<<"Remainder: "<<remainder<<endl;
    
    return 0;
}
