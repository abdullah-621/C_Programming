#include<stdio.h>
int fact(int a);
int main(){
    int x;
    printf("Enter the value:");
    scanf("%d",&x);
    int a = fact(x);
    return 0;
}
int fact(int a){
    int product = 1;
    for(int i=1;i<=a;i++){
        product = product*i;
        printf("The factorial of %d is :%d\n",i,product);
        //int sum = fact(1)/1+fact(2)/2+fact(3)/3+fact(4)/4+fact(5)/5;
    }
    return 0;
}