#include <iomanip>
#include <iostream>
using namespace std;
int sum(int a, int b){
    return a+b;
}
int difference(int a, int b){
    return a-b;
}
int multiply(int a, int b){
    return a*b;
}
float divide(float a, float b){
    if(b!=0){
        return a/b;
    }
    else{
        cout<<"ERROR! can't divide by zero\n";
        return -1;
    }
}
int main(){
    int a,b;int choice;
    float result;
    cout<<"Enter two numbers: ";cin>>a>>b;
    cout<<"1.Sum\n2.Difference\n3.Multiply\n4.Divide\nEnter Choice: ";cin>>choice;
    
    repeat:
    switch(choice){
        case 1: result=sum(a,b);
                cout<<fixed<<setprecision(2)<<"Sum: "<<result<<"\n";break;
        case 2: result=difference(a,b);
                cout<<fixed<<setprecision(2)<<"Difference: "<<result<<"\n";break;
        case 3: result=multiply(a,b);
                cout<<fixed<<setprecision(2)<<"Difference: "<<result<<"\n";break;
        case 4: result=divide(a,b);
                cout<<fixed<<setprecision(2)<<"Difference: "<<result<<"\n";break;
        default: cout<<"Invalid Input try again\n";goto repeat;
    }
}

