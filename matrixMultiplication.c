#include <stdio.h>
int main(){
  int m=4,n=3,p=3;
  /* int a[m][n];
  int b[n][p];
  int res[m][p]={0}; */

  int matrix1[4][3]={1,2,3,4,5,6,7,8,9,1,2,3};
  int matrix2[3][3]={1,2,3,4,5,6,7,8,9};
  int result[4][3]={0};
  

  for(int i=0;i<m;i++){
    for(int j=0;j<p;j++){  //ai0b0j+ai1b1j+ai2b2j
    
      
      for(int k=0;k<n;k++){
      result[i][j]=result[i][j]+matrix1[i][k]*matrix2[k][j];}
    }
    printf("\n");
  }

  for(int i=0;i<m;i++){
    for(int j=0;j<p;j++){
      printf("%d ",result[i][j]);
    }
    printf("\n");
  }
  return 0;

  
}
