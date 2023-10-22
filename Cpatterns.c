//   *
//  ***
// *****
//*******
/* #include <stdio.h>
int main()
{
  int n = 4;
  for (int i = 1; i <= n; i++)
  {
    for (int j = n - 1; j >= i; j--)
    {
      printf(" ");
    }
    for (int k = 1; k <= 2 * i - 1; k++)
    {
      printf("*");
    }
    printf("\n");
  }
  return 0;
} */

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//    0
//   101
//  21012
// 3210123
/* #include <stdio.h>
int main()
{
  int n = 4;
  for (int i = 1; i <= n; i++)
  {
    for (int j = n - 1; j >= i; j--)
    {
      printf(" ");
    }
    for (int a = 2; a <= i; a++)
    {
      printf("%d", a - 1); // left half 1 123 12345
    }
    printf("%d", 0); // print 0 0 0 0
    for (int a = 2; a <= i; a++)
    {
      printf("%d", i - a + 1); // right half 1 123 12345
    }
    printf("\n");
  }
  return 0;
}  */

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//     1
//    2 2
//   3 3 3
//  4 4 4 4
// 5 5 5 5 5

/* #include <stdio.h>
int main(){
  int n=5;
  for (int i=1;i<=n;i++){
    for(int j=i;j<n;j++){
      printf(" ");
    }
    for(int k=1;k<=i;k++){
      printf("%d ",i);
    }
    printf("\n");

  }
  return 0;
}
 */

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//1
//232
//34543
//4567654 

/* #include <stdio.h>
int main(){
  int n=5;
  int num1,num2;
  
  for(int i=1;i<=n;i++){
    num1=i;                       //inserting num1 value so that it is replaced by i each time
    for(int j=1;j<=i;j++){
    printf("%d",num1);
    num1++;
   }
   num2=2*(i-1);               //similar to num1 replacement num2 ,by even numbr
   for(int k=1;k<i;k++){
    printf("%d",num2);
    num2--;
   }
  printf("\n");
  }
  return 0;
} */

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *
/* #include <stdio.h>
int main(){
  int n=9,ref;
 if(n%2==0){      //if n=even mid up rows = mid down 
  for (int i=1;i<=n/2;i++){  //mid up rows for n=even
    for(int j=1;j<=i;j++){
      printf("*");
    }
    printf("\n");
  }
  }
  else{           //if n=odd mid up rows has one extra row
    for (int i=0;i<=n/2;i++){ //mid up rows for n= odd
    for(int j=0;j<=i;j++){
      printf("*");
    }
    printf("\n");
  }
}
for(int k=1;k<=n/2;k++){  //even and odd both have same odd down rows
  for (int l=n/2;l>=k;l--){
    printf("*");
  }
  printf("\n");
}
return 0;

} */

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//      1
//     1 1
//    1 2 1
//   1 3 3 1
//  1 4 6 4 1
// 1 5 10 10 5 1
/* #include<stdio.h>
int pascalValue(int a,int b){
  int val;
  if(a==b ||b==1){
    return 1;
  }
 val=pascalValue(a-1,b-1)+pascalValue(a-1,b);
 return val;
}
int main(){
  int n=6;
  for(int i=1;i<=n;i++){
    for(int j=n;j>i;j--){
      printf(" ");
    }
    for(int k=1;k<=i;k++){
      printf("%d ",pascalValue(i,k));
    }
    printf("\n");
    
  }
  return 0;
} */


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//      1
//     1 1
//    1 2 1
//   1 3 3 1
//  1 4 6 4 1
// 1 5 10 10 5 1  Without Function

/*#include <stdio.h>
int main(){
    int line=6;
    int term=1;
    
    for(int n=0;n<line;n++){
        for(int r=n;r<line-1;r++){
            printf(" ");
        }
        
        for(int r=0;r<=n;r++){
            if(r==0){
                printf("%d ",term);
            }
            else{
                term=term*(n-r+1)/r;
                printf("%d ",term);
            }
            
        }
        printf("\n");
    }
    return 0;
}*/

