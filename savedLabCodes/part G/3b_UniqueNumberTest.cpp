
#include <iostream>
using namespace std;

class UniqueNumberTest{
    int num;
    int *array;
public:
    UniqueNumberTest(int n):num(n){
        array=new int[n];
        int i=0;
        while(n){
            array[i++]=n%10;
            n/=10;
        }
    }
    ~UniqueNumberTest(){
        
    }
    int digits(){
        int n=num;
        int i=0;
        while(n){
            i++;
            n/=10;
        }
        return i;
    }
    void isUnique(){
        for(int i=0;i<digits()-1;i++){
            for(int j=i+1;j<digits();j++){
                if(array[i]==array[j]){
                    cout<<num<<" is NOT UNIQUE\n";
                    return;
                }
            }
        }
        cout<<num<<" is UNIQUE\n";
        return;
    }
    
};

int main() {
    UniqueNumberTest num(2334);
    num.isUnique();
    
    UniqueNumberTest num2(234);
    num2.isUnique();

    return 0;
}
