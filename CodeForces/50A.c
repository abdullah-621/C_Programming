#include<stdio.h>
int main(){
    int M,N;
    scanf("%d %d", &M, &N);
    
    int rectangular = M * N;

    printf("%d",rectangular / 2);
    return 0;
}