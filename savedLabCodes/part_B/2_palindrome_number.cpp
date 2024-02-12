#include <iostream>
using namespace std;

int reverse_number(int number){
    int reverse=0;
    while (number>0){
        reverse=reverse*10+number%10;
        number/=10;
    }
    return reverse;
}

int main(){
    int a;
    cout<<"Enter number for palindrome test: ";cin>>a;
    if(a==reverse_number(a)){
        printf("%d is palindrome\n",a);
    }
    else{
        printf("%d is NOT palindrome\n",a);
    }
    return 0;
    
}
