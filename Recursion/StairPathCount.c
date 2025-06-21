#include<stdio.h>
int stair(int a){
    if(a<=3) return a;
    return stair(a-1) + stair(a-2) + stair(a-3);
}
int main(){
    int n;
    printf("Enter the number of n :");
    scanf("%d",&n);

    printf("The %dth stair is = %d",n,stair(n));
    return 0;
}