#include <string>
#include <iostream>
using namespace std;

bool isPalindrome(const std::string &str){
    int l=0;
    int h=str.length()-1;
    
    while(h>l){
        if(str[l++]!=str[h--]){
            return false;
        }
    }
    return true;
}

int main() {
    std::string str;
    std::cout<<"Enter a string: ";std::cin>>str;
    
    if(isPalindrome(str)){
        std::cout<<str<<" is Palindrome\n";
    }
    else{
        std::cout<<str<<" is NOT Palindrome\n";
    }
    return 0;

    return 0;
}
