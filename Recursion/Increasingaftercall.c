#include<stdio.h>
void dicreasing(int n){
    if(n==0) return;
    dicreasing(n-1);
    printf("%d\n",n);
    return;
}
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    dicreasing(n);
    return 0;
}