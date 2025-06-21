#include<stdio.h>
int main(){
    int arr[7] = {12,33,43,47,45,67,7889};
    
    printf("%p \n%p \n%p \n%p \n%p \n%p \n%p ",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4],&arr[5],&arr[6]);

    return 0;

}