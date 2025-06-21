#include<stdio.h>
int main(){
    int arr[5];
    int sum = 0;
    for(int i = 0;i<=4;i++){
        printf("Enter the %d elements :",i);
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }
    printf("The sum is:%d",sum);

    return 0;
}