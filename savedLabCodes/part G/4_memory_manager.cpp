#include <iostream>
using namespace std;

class MemoryManager {
private:
    int* memory;
    int size;

public:
    // Dynamic constructor
    MemoryManager(int s) : size(s) {
        memory = new int[size];
        cout << "Memory of size " << size << " has been allocated." << endl;
    }

    // Destructor
    ~MemoryManager() {
        delete[] memory;
        cout << "Memory has been deallocated." << endl;
    }

    // Function to fill the memory with a value
    void fillMemoryWithSingleValue(int value) {
        for(int i = 0; i < size; i++) {
            memory[i] = value;
        }
    }
    void fillMemory(){
        cout<<"Enter the elements\n";
        for(int i=0;i<size;i++){
            cin>>memory[i];
        }
    }

    // Function to print the memory
    void printMemory() {
        for(int i = 0; i < size; i++) {
            cout << memory[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    MemoryManager mm(10); 
    
    mm.fillMemoryWithSingleValue(5);
    mm.printMemory(); 
    
    MemoryManager mm2(10);
    mm2.fillMemory();
    mm2.printMemory();


    return 0;
}
