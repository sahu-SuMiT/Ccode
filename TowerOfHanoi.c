#include<stdio.h>
void TowerOfHanoi(int n,char s,char h,char d){

  if(n==1){
    printf("%c>%c\n",s,d);
    return;
  }
  /* if(n==0){
    return;
  } */
  
  TowerOfHanoi(n-1,s,d,h);
  printf("%c>%c\n",s,d);
  TowerOfHanoi(n-1,h,s,d);
  return; 
}
int main(){
  int n;
  printf("Enter n : ");
  scanf("%d",&n);
  TowerOfHanoi(n,'a','b','c');
  return 0;

}
