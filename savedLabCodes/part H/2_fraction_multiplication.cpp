
#include <iostream>
using namespace std;
class Fraction{
    int numerator;
    int denominator;
public:
    Fraction(int num, int den) : numerator(num),denominator(den){}
    Fraction operator*(const Fraction& obj){
        Fraction res(numerator * obj.numerator, denominator * obj.denominator);
        return res;
    }
    void print(){
        cout<<numerator<<"/"<<denominator<<endl;
    }
};
int main() {
    Fraction f1(1,2);
    f1.print();
    
    Fraction f2(3,4);
    f2.print();
    
    Fraction f3=f1*f2;
    f3.print();

    return 0;
}
