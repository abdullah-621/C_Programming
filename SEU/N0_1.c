#include<stdio.h>
int main(){
    int sum = 0,arr[10];

    printf("Enter 10 Number:\n");
    for (int i = 0; i < 10; i++){
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }
    float avarage = sum/10.0;
    printf("Total sum is:%d\nAvarage is:%.2f",sum,avarage);
    
    return 0;
}