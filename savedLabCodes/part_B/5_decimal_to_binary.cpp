
#include <iostream>
using namespace std;

unsigned int decimal_to_binary(unsigned int n){
    unsigned int binary_num=0;unsigned int multiplier=1;
    while(n>0){
        binary_num = n%2*multiplier+binary_num;
        multiplier*=10;
        n/=2;
    }
    return binary_num;
}

int main() {
    unsigned int num;
    cout<<"Enter a number: ";cin>>num;
    cout<<"Binary Equivalence: "<<decimal_to_binary(num)<<endl;
    return 0;
}
