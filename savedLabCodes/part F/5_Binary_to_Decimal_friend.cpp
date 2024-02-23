using namespace std;//check pass by copy
#include <iostream>

class Binary{
    int bin;
public:
    Binary(int n):bin(n){};
    friend void print_bin_to_deci(int bin);
};

void print_bin_to_deci(int bin){
    int deci=0;
    int temp_bin=bin;int multiplier=1;
    while(temp_bin!=0){
        deci = deci + (temp_bin%10)*multiplier;
        multiplier*=2;
        temp_bin/=10;
    }
    printf("Decimal equivalence: %d\n",deci);
}


int main() {
    int n;
    cout<<"Enter input binary number: ";cin>>n;
    Binary b1(n);
    print_bin_to_deci(n);
    
    cout << "Hello world!\n";
    

    return 0;
}
