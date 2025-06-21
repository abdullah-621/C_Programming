#include<stdio.h>
int Factorial(int n){
    if(n==1 || n==0) return 1;  //Base case
    int recAns = n * Factorial(n-1);
    return recAns;
}
int main(){
    int n;
    printf("Enter the value of N :");
    scanf("%d",&n);
    int fact = Factorial(n);
    printf("The Factorial of %d is = %d",n,fact);
    return 0;
}