#include<stdio.h>
void sum(int n, int s){
    if(n==0){
        printf("%d",s);
        return;
    }
    sum(n-1,n+s);
    return;
}
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    sum(n,0);  //extra parameter
    return 0;
}