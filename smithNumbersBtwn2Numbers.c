// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>
bool isPrime(int n){
    if(n<=2){
        return false;
    }
    for(int i=2;i*i<=n;i++){
        if( n%i==0){
            return false;
        }
    }
    return true;
}

int digitSum(int n){
    int sum=0;
    while(n>0){
        sum=sum+n%10;
        n=n/10;
    }
    return sum;
}

int primeFacSum(int n){
    if(n==0||n==1){return 0;}
    int sum=0;
    for(int i=2;i>0;i++){
        if(n%i==0){
            n=n/i;
            sum=sum+digitSum(i)+primeFacSum(n);
            break;
        }
    }return sum;
}


int main() {
    int a,b;
    printf("Enter a number range for Smith number : ");
    scanf("%d %d",&a,&b);
    printf("Folling are Smith Number\n");
    for(int i=a;i<=b;i++){
      if(digitSum(i)==primeFacSum(i)){
        if(isPrime(i)){continue;}
        printf("%d ",i);
      }
    }
    return 0;
}
