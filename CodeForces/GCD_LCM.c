#include<stdio.h>
int main(){
    int num1,num2;
    printf("Entre the number:");
    scanf("%d%d",&num1,&num2);

    int cont = num1 * num2;
    int reminder;
    
    while (num2 != 0){

        reminder = num1 % num2;
        num1 = num2;
        num2 = reminder;
    }
    
    int GCD = num1;
    int LCM = cont / GCD;

    printf("Gcd is = %d\nLCM Is = %d ",GCD,LCM);
    
    return 0;
}