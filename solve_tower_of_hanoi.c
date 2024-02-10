#include <stdio.h>

void solve_tower_of_hanoi(int n, char first, char intermediate, char final){
    if(n==1){
        printf("%c --> %c\n",first,final);
        return;
    }
    solve_tower_of_hanoi( n-1,  first,  final,  intermediate);
    printf("%c --> %c\n",first,final);
    solve_tower_of_hanoi( n-1,  intermediate,  first,  final);
}

int main() {
    
    char a = 'a';
    char b = 'b';
    char c = 'c';
    int  n = 4;
    solve_tower_of_hanoi(n,a,b,c);

    return 0;
}
