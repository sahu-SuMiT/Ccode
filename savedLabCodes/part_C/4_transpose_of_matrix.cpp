// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int m,n;
    cout<<"Enter no of rows and columns: ";cin>>m>>n;
    int matrix[m][n];
    cout<<"Enter your matrix elements\n";
    
    //take input of all elements
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    cout<<"\nYOUR MATRIX\n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    int transpose[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            transpose[i][j]=matrix[j][i];
        }
    }
    cout<<"TRANSPOSE\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    

    return 0;
}
