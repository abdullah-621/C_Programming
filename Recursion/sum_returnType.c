#include<stdio.h>
int sum(int n){
    if(n==0)return 0;
    int s = n + sum(n-1);
    return s;
}
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int Sum = sum(n); 
    printf("The sum is :%d",Sum);
    return 0;
}