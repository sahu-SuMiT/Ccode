#include <iostream>
using namespace std;

class Memory_allocation{
    int *a;
    float *b;
    int *array; int size;
public:
    Memory_allocation(int s):size(s){
        a = new int;
        b = new float;
        array = new int[size];
    }
    void add_inputs(){
        cout<<"Enter integer a:"; cin>>*a;
        cout<<"Enter float b:"; cin>>*b;
        cout<<"Enter elements for array of size "<<size<<"\n";
        for(int i=0;i<size;i++){
            cin>>array[i];
        }
    }
    void print(){
        cout<<"Integer a: "<<*a;
        cout<<"\nFloat b:"<<*b;
        cout<<"\narray: ";
        for(int i=0;i<size;i++){
            cout<<array[i]<<" ";
        }
        cout<<endl;
    }
    ~Memory_allocation(){
        delete array;
        delete a;
        delete b;
    }
};

int main(){
    Memory_allocation m1(5);
    m1.add_inputs();
    m1.print();
    return 0;
}
