#include<stdio.h>
int main(){

    int n,sum = 0;
    printf("Enter no of terms:");
    scanf("%d",&n);

    int odd_number;
    printf("The first %d odd natural numbers are:\n", n);
    
    for (int i = 1; i <= n; i++){
        odd_number = 2 * i - 1;
        printf("%d ",odd_number);
        sum += odd_number;
    }
    printf("\nThe sum of the first %d odd natural numbers is: %d\n", n, sum);
    return 0;
}