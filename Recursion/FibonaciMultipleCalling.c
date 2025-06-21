#include<stdio.h>

int fibo(int a){
    if(a==1 || a==2) return 1;
    
    return fibo(a-1) + fibo(a-2);
}
int main(){
    int n;
    printf("Enter the number of n :");
    scanf("%d",&n);

    printf("The fibonaci of %dth term is = %d",n,fibo(n));
    return 0;
}