#include<stdio.h>
#include<stdbool.h>

int main(){
  int n;
  printf("Enter n for matrix : ");
  scanf("%d",&n);
  int a[n][n];

  int minRow=0,minCol=0,maxRow=n-1,maxCol=n-1;
  int count=1;
  while (true){
    for(int j=minCol;j<=maxCol;j++){
      a[minRow][j]=count;
      count++; if(count>n*n){break;}//or if(count==n*n+1){break;}
    } if(count>n*n){break;}
    minRow++;
    for(int i=minRow;i<=maxRow;i++){
      a[i][maxCol]=count;
      count++; if(count>n*n){break;}
    } if(count>n*n){break;}
    maxCol--;
    for(int j=maxCol;j>=minCol;j--){
      a[maxRow][j]=count;
      count++; if(count>n*n){break;}
    } if(count>n*n){break;}
    maxRow--;
    for(int i=maxRow;i>=minRow;i--){
      a[i][minCol]=count;
      count++; if(count>n*n){break;}
    } if(count>n*n){break;}
    minCol++;
  }

  //printing the given matrix

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      printf("%d ",a[i][j]);
    }
    printf("\n");
  }
  return 0;
}

/*Output
Enter n for matrix : 5 5
1 2 3 4 5
16 17 18 19 6
15 24 25 20 7
14 23 22 21 8
13 12 11 10 9         */
