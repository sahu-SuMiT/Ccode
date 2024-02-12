
#include <iostream>
using namespace std;

bool isLeapYear(int &year){
    if(year%4!=0){
        //year is not divisible by 4
        return false;
    }
    else if(year%100!=0){
        //divisible by 4 not divisible by 100
        return true;
    }
    else if(year%400!=0){
        //divisible by 4 divisible 100 not divisible by 400
        return false;
    }
    else{
        return true;
    }
}

bool is_leap_year(int &year){
    if((year%4==0 && year%100!=0)||(year%400==0)){
        return true;
    }
    return false;
}
int main(){
    int year;
    printf("Enter a year for leap year test: ");
    scanf("%d",&year);
    
    if(is_leap_year(year)){
        cout<<"Leap Year\n";
    }
    else{
        cout<<"Not a Leap Year\n";
    }
    return 0;
}

