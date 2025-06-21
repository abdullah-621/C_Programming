#include<stdio.h>

int sum(int n);

int main(){
    int n;
    printf("Enter number:");
    scanf("%d",&n);

    int sum1 = sum(n);
    printf("Sum is :%d",sum1);
    return 0;
}

int sum(int n){
    int sum2;

    if (n == 1){
        return 1;
    }
    else{
        sum2 = n + sum(n-1);
    }
    
    return sum2;
}