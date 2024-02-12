// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void string_copy(string &from, string &to){
    to = from;
    return;
}
int string_compare(const string &s1, const string &s2){
   
    if(s1.length()==s2.length()){
        return 0 ;
    }
    else if(s1.length()<s2.length()){
        return -1;
    }
    else{
        return 1;
    }
}
void string_concat(string &first, string &second){
    first=first+second;
    return;
}
int main() {
    string s1="Gaurav";
    string s2="Sharma";
    string_copy(s1,s2);
    cout<<"After copying: "<<s2<<"\n";
    int output = string_compare(s1,s2);
    cout<<"string_compare result: "<<output<<"\n";
    
    string_concat(s1,s2);
    cout<<s1<<endl;
    

    return 0;
}
