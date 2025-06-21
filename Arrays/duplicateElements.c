#include<stdio.h>
int main(){
     int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 5};

     int n = sizeof(arr) / sizeof(arr[0]);

     for(int i = 0;i <= n - 1;i++){

        for(int j = i + 1;j <= n - 1;j++){

            if(arr[i]==arr[j]){

                printf("%d is the duplicate element",arr[i]);

                break;
            }
        }
     }
     
    return 0;
}