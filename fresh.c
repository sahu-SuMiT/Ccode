
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
    //errorvoid vd = void;
    
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
    
    

    return 0;
}
