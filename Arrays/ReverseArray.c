#include<stdio.h>
int main(){
    int arr[5] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);  // just n
    int brr[5];
    for(int i=0;i<=n-1;i++){
        brr[i] = arr[(n-1)-i];
        printf("%d ",brr[i]);
    }
    
    return 0;
}