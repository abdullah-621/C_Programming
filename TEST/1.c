#include<stdio.h>
int main(){
    int n;
    printf("Enter Elements:");
    scanf("%d",&n);

    int arr[n];
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    float Avagage = sum / n;
    printf("Sum Is:%d\nAvarage Is:%.2f",sum,Avagage);
    return 0;
}