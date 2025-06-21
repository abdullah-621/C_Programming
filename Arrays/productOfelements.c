#include<stdio.h>
int main(){
    int arr[5];
    int product = 1;
    for(int i = 0;i<=4;i++){
        printf("Enter the %d elements :",i);
        scanf("%d",&arr[i]);
        product = product * arr[i];
    }
    printf("The product is:%d",product);

    return 0;
}