
#include <iostream>
using namespace std;

void getCofactor(int mat[10][10], int temp[10][10], int p, int q, int n) {
    int i = 0, j = 0;
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            if (row != p && col != q) {
                temp[i][j++] = mat[row][col];
                if (j == n - 1) {
                    j = 0;
                    i++;
                }
            }
        }
    }
}
int determinant(int mat[10][10], int n) {
    int D = 0;
    if (n == 1)
        return mat[0][0];

    int temp[10][10];
    int sign = 1;
    for (int f = 0; f < n; f++) {
        getCofactor(mat, temp, 0, f, n);
        D += sign * mat[0][f] * determinant(temp, n - 1);
        sign = -sign;
    }
    return D;
}

class Matrix{
    int matrix[10][10];
    int n;
public:
    Matrix(int order):n(order){
        cout<<"Enter the elements for your "<<n<<" x "<<n<<" matrix\n";
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>matrix[i][j];
            }
        }
    }
    ~Matrix(){
    }
    void print(){
        cout<<"Your Matrix:\n";
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<matrix[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    
    void is_invertible(){
        int D=determinant(matrix,n);
        if(D){
            cout<<"\nInvertible as determinant: "<<D<<endl;
        }
        else{
            cout<<"\nNOT INVERTIBLE as determinant: "<<D<<endl;
        }
    }

    
};

int main() {
    int n;
    cout<<"Enter matrix order, n=";cin>>n;
    Matrix m1(n);
    m1.print();
    m1.is_invertible();
    return 0;
}
