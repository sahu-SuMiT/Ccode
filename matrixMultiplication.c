#include<stdio.h>
int main(){
  int m,n,p;

  //first matrix a
  printf("Enter mxn for first matrix with gap : ");
  scanf("%d %d",&m,&n);
  int a[m][n];
  printf("Enter the Entries :\n");
  for(int i=0;i<m;i++){
    for (int j=0;j<n;j++){
      scanf("%d",&a[i][j]);
    }
  }

  //second Matrix b
  printf("Enter nxp for second matrix with gap : ");
  scanf("%d %d",&n,&p);
  int b[n][p];
  printf("Enter the Entries :\n");
  for(int i=0;i<n;i++){
    for (int j=0;j<p;j++){
      scanf("%d",&b[i][j]);
    }
  }

  //resultant matrix r
  int r[m][p];
  for(int i=0;i<m;i++){
    for(int j=0;j<p;j++){
      r[i][j]=0;
      for(int k=0;k<n;k++){
        r[i][j]+=a[i][k]*b[k][j];//for n=3=> ai0*b0j + ai1*b1j + ai2*b2j
      }
    }
  }

  
  //Print Resultant
  for(int i=0;i<m;i++){
    for(int j=0;j<p;j++){
      printf("%d ",r[i][j]);
    }
    printf("\n");
  }
 return 0;
}
