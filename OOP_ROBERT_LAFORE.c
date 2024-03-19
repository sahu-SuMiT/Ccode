//checkin sizes 
#include <stdio.h> 
#include<stdbool.h>
int main() {
    float alpha = 10;
    float *pointer = &alpha;
    printf("sizeof(pointer): %d\n",sizeof(pointer));
    printf("sizeof(void *): %d\n\n",sizeof(void *));    
    printf("Size Program\n");
    char ch='a';
    int in = 10;
    short sh = 10;
    long lg = 10;
    long long lg_lg= 10;
    float fl= 10.10;
    double db = 10.10;   
    bool bl = 90;
    //error void vd = void;  
    printf("sizeof(char *): %d\n",sizeof(char *));
    printf("sizeof(ch): %d\n\n",sizeof(ch));
    
    printf("sizeof(int *): %d\n",sizeof(int *));
    printf("sizeof(in): %d\n\n",sizeof(in));
    
    printf("sizeof(short *): %d\n",sizeof(short *));
    printf("sizeof(sh): %d\n\n",sizeof(sh));
    
    printf("sizeof(long *): %d\n",sizeof(long *));
    printf("sizeof(lg): %d\n\n",sizeof(lg));
    
    printf("sizeof(long long *): %d\n",sizeof(long long *));
    printf("sizeof(lg_lg): %d\n\n",sizeof(lg_lg));
    
    printf("sizeof(float *): %d\n",sizeof(float *));
    printf("sizeof(fl): %d\n\n",sizeof(fl));
    
    printf("sizeof(double *): %d\n",sizeof(double *));
    printf("sizeof(db): %d\n\n",sizeof(db));
    
    printf("sizeof(int *): %d\n",sizeof(int *));
    printf("sizeof(db): %d\n\n",sizeof(db));
    return 0;}



//pointer arrays dynamic stuff
#include <stdio.h>
#include <stdlib.h>
int main() {
    int m=3,n=4;
    int **array;
    array=malloc(sizeof(int *)*m);
    for(int j=0;j<n;j++){
        *(array+j)=malloc(sizeof(int)*n);} 
    int num=1;
    //filling the elemetns
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            array[i][j]=num; num++;}}
    //print
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",array[i][j]);}
        printf("\n");}
    return 0;}


//setw manipulator
#include "iostream"
#include "iomanip"
using namespace std;
int main(){
   long pop1=2425785, pop2=47, pop3=9761;
   cout<<setw(8)<<"LOCATION "<<setw(12)<<"POP"<<setw(12)<<"POP2"<<endl;
   cout<<setw(8)<<"Portcity "<<setw(12)<<pop1<<setw(12)<<"POP2"<<endl;
   cout<<setw(8)<<"Hightown "<<setw(12)<<pop2<<setw(12)<<"POP2"<<endl;
   cout<<setw(8)<<"Lowville "<<setw(12)<<pop3<<setw(12)<<"POP2"<<endl;
   return 0;}



//4 function calculator
#include "iostream"
using namespace std;
void sum(double a, double b){
  cout<<"Answer= "<<a+b<<endl;}
void difference(double a, double b){
  cout<<"Answer= "<<a-b<<endl;}
void product(double a, double b){
  cout<<"Answer= "<<a*b<<endl;}
void divide(double a, double b){
  (b!=0)? (cout<<"Answer= "<<a/b<<endl) : (cout<<"can't divide by 0\n");}
int main(){
    int a, b; char ch;
  repeat:
  cout<<"Enter first number, operator, second number:";
  cin>>a>>ch>>b;
  switch(ch){
    case '+':sum(a,b); break;
    case '-':difference(a,b); break;
    case '*':product(a,b); break;
    case '/':divide(a,b); break;
    default : cout<<"TRY AGAIN!!!\n"; goto repeat;}
  secondrepeat:
  cout<<"Do another (y/n)?:"; cin>>ch;
  //(ch=='y'|| ch=='Y')? goto repeat : exit(0) ;    wrong as ternary is used for conditional expressio
  switch(ch){
    case 'y':
    case 'Y': goto repeat;
    case 'n':
    case 'N': exit(0);
    default: cout<<"TRY AGAIN!!!\n"; goto secondrepeat;}
  return 0;}


//new and delete to an array of char
#include "iostream"
using namespace std;
#include "cstring"
int main(){
  //char str[]="Idle hands are the devil's workshop.";
  char* str="Idle hands are the devil's workshop.";
  int len=strlen(str);
  cout<<"strlen(str): "<<strlen(str)<<endl;
  char *ptr; ptr=new char[len+1];
  strcpy(ptr,str);
  cout<<endl<<"ptr: "<<ptr<<endl;
  cout<<"ptr might have printed upside\n";
  delete ptr;
  return 0;}

