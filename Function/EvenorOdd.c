#include<stdio.h>
int check(int x){
    if(x%2==0){
        printf("%d is even number",x);
    }
    else{
        printf("%d is odd number",x);
    }
    return 0;
}
int main(){
    int n;
    printf("Enter The value of n:");
    scanf("%d",&n);
    int  a = check(n);
    return 0;
}