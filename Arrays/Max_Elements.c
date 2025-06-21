#include<stdio.h>
#include<limits.h>
int main(){
    int arr[5];
    int max = INT_MIN;
    for(int i = 0; i<=4;i++){
        printf("Enter the %d elements : ",i);
        scanf("%d",&arr[i]);
        if(max < arr[i]){
            max = arr[i];
        }
    }
     printf("\n\nThe maximam number is : %d\n\n",max);
    return 0;
}