#include<stdio.h>
void Good(int n){
    if(n==0) return;
    printf("Good Morning\n");
    Good(n-1);
    return;
}
int main(){
    int n;
    printf("Enter the value of N :");
    scanf("%d",&n);
    Good(n);
    return 0;
}