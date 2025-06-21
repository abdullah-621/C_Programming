#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    
    int last_digit = 0;
    int Squre_sum = 0;

    do{
        last_digit = n%10;
        Squre_sum += pow(last_digit,2);
        n = n / 10;
    }
    while (n != 0);
    printf("The sum of the squares of each digit is:%d",Squre_sum);
    return 0;
}