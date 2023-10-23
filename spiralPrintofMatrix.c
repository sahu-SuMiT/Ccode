#include <stdio.h>



int main(){
  
  //first matrix a
  int m,n;
  printf("Enter mxn for first matrix with gap : ");
  scanf("%d %d",&m,&n);
  int arr[m][n];
  printf("Enter the Entries :\n");
  for(int i=0;i<m;i++){
    for (int j=0;j<n;j++){
      scanf("%d",&arr[i][j]);
    }
  }

 int minRow=0,minCol=0,maxRow=m-1,maxCol=n-1;
 int count=0;
    while(count<=m*n){
    
    for(int j=minCol;j<=maxCol;j++){
        printf("%d ",arr[minRow][j]);
        count++;if(count==m*n){break;}//break for for loop
    } if(count==m*n){break;}//break for while
    minRow++;

    for(int i=minRow;i<=maxRow;i++){
        printf("%d ",arr[i][maxCol]);
        count++;if(count==m*n){break;}//break for for loop
    } if(count==m*n){break;}//break for while
    maxCol--;

    for(int j=maxCol;j>=minCol;j--){
        printf("%d ",arr[maxRow][j]);
        count++;if(count==m*n){break;}//break for for loop
    } if(count==m*n){break;}//break for while
    maxRow--;

    for(int i=maxRow;i>=minRow;i--){
        printf("%d ",arr[i][minCol]);
        count++;if(count==m*n){break;}//break for for loop
    } if(count==m*n){break;}//break for while
    minCol++;} 

  return 0;
}

// eg 
// 1 2 3
// 4 5 6
// 7 8 9
// output
// 1 2 3 6 9 8 7 4 5
