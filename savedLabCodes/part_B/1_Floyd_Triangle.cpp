
#include <iostream>
using namespace std;
int main() {
    int value = 1;
    int lines = 4;
    
    for(int i=0;i<lines;i++){
        for(int j=0;j<=i;j++){
            cout<<value<<"  ";value++;
        }
        cout<<"\n";
    }
    
    return 0;
}
