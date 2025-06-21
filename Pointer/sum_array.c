#include<stdio.h>

int sum(int *a,int size){
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += *(a + i);
    }
    return sum;
}
int main(){

    int arr[5] = {12,32,34,54,54};
    int result = sum(arr,5);
    printf("Sum of the array is :%d",result);

    return 0;
}