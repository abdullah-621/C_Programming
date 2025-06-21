#include<stdio.h>
int power(int a, int b){
    if(b==0) return 1;
    int s = a * power(a, b-1);
    return s;
}
int main(){
    int x;
    printf("Enter base:");
    scanf("%d",&x);
    int y;
    printf("Enter power:");
    scanf("%d",&y);
    int pow = power(x, y); 
    printf("%d raised to the power %d is : %d",x,y,pow);
    return 0;
}