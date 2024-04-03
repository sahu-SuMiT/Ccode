
#include <iostream>
using namespace std;

class Counter{
private:
    int count;
public:
    Counter(int c):count(c){}
    
    Counter operator++(){
        ++count;
        return *this;
    }
    
    Counter operator--(){
        --count;
        return *this;
    }
    
    void print(){
        cout<<"Count: "<<count<<endl;
    }
};

int main() {
    Counter c1(10);
    c1.print();
    
    ++c1;
    c1.print();
    
    --c1;
    c1.print();

    return 0;
}
