#include <iostream>
#include <string>
using namespace std;

class library {
private: 
    string title[100]; // Use string objects instead of character arrays
    string author[100];
    int price[100]; // Use an array to store prices for each book
    int volume[100];
    int availability[100];
    static int counter; // Static member variable to keep track of the number of books

public:
    void initcounter(void) {
        counter = 0; // Initialize the counter to 0
    }

    void setdata(void) {
        cin.ignore();
        cout << "Enter the title of a book: ";getline(cin,title[counter]);
        //cin >> title[counter];
        cout << "Name of author: ";getline(cin,author[counter]);
        //cin >> author[counter];
        cout << "Enter the price of the book: ";
        cin >> price[counter];
        cout << "Enter the volume: ";
        cin >> volume[counter];
        cout << "Number of books available: ";
        cin >> availability[counter];
        counter++; // Increment the counter after setting data for a book
    }

    void getdata(void) {
        cout<<"....Printing the elements...."<<endl;
        for (int i = 0; i < counter; i++) {
            cout << "Title of a book: " << title[i] << endl;
            cout << "Name of author: " << author[i] << endl;
            cout << "Price of book is: " << price[i] << endl;
            cout << "Volume of book: " << volume[i] << endl;
            cout << "Availability: " << availability[i] << endl; cout<<"\n";
        }

    }
    
    void addbook(){
        int ab;
         cout<<""<<endl;
        cout<<"Enter the number of books to be add : "<<endl;
        cin>>ab;
        for(int i=0;i<ab;i++){
        
        setdata();
        }
    }
    void total(void){
        cout<<"Total number of books : "<<counter<<endl;
    }
};

// Define the static member variable outside the class
int library::counter = 0;

int main() {
    int a;
    cout << "Enter the number of books: ";
    cin >> a;
    library lib; // Create a single library object

    for (int i = 0; i < a; i++) {
        lib.setdata();
        cout<<"\n";
    }
    lib.getdata();//added by me
    lib.addbook();
    cout<<"\n";
    lib.getdata(); // Display information for all books entered
    lib.total();
    
    return 0;
}
