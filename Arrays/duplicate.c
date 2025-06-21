#include<stdio.h>
#include<stdlib.h>
int main(){

    int n;
    printf("Enter N:");
    scanf("%d",&n);
    int sum_Of_index = n * (n - 1) / 2;
    int arr[n];

    int sum_of_elements = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        sum_of_elements += arr[i];
    }
    
    printf("Duplicate element is : %d",sum_of_elements - sum_Of_index);

    return 0;
}