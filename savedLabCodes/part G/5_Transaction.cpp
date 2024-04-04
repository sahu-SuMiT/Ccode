#include <iostream>
#include <string>
using namespace std;

class Transaction {
public:
    void Begin() {
        cout << "Transaction started.\n";
    }

    void Commit() {
        cout << "Transaction committed.\n";
    }

    void Rollback() {
        cout << "Transaction rolled back.\n";
    }

    void Query(string query) {
        cout << "Executing query: " << query << "\n";
    }
};

int main() {
    Transaction t;
    t.Begin();
    cout<<"\n";
    t.Query("\nSELECT * FROM table");
    cout<<"\n";
    t.Commit();
    return 0;
}
