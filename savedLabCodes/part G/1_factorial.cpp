
#include <iostream>
using namespace std;

class Factorial{
    int numb;
    int factorial;
public: 
    Factorial(int num):numb(num),factorial(1){
        for(int i=1;i<=numb;i++){
            factorial*=i;
        }
    }
    void print(){
        cout<<"Factorial of "<<numb<<" is "<< factorial<<endl;
    }
    ~Factorial(){
        cout<<"Destructor called for number "<<numb<<endl;
    }
};

int main() {
    Factorial f(5);
    f.print();

    return 0;
}
