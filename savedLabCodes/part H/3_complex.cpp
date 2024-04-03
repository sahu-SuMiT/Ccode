
#include <iostream>
using namespace std;
class Complex{
    double real;
    double imaginary;
public:
    Complex(int r, int i):real(r),imaginary(i){};
    
    Complex operator+(const Complex& obj){
        return Complex(real+obj.real,imaginary+obj.imaginary);
        
    }
    void print(){
        cout<<real<<" + i"<<imaginary<<endl;
    }
};

int main() {
    Complex c1(10,15);
    c1.print();
    
    Complex c2(10,5);
    c2.print();
    
    Complex c3 = c1+c2;
    c3.print();

    return 0;
}
