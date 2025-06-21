#include<stdio.h>
int main(){
    int x;
    printf("Enter the Number:");  // Input for user x
    scanf("%d",&x);

    int arr[8];
    int n =  sizeof(arr) / sizeof(arr[0]);    // number of array
    for(int i=0;i<n;i++){
        printf("Enter the %d number elements :",i);    // Input from user arr[8]
        scanf("%d",&arr[i]);
    }

    // int x = 5;
    // int arr[5] = {2,3,6,8,9};  // Easy away

    int count = 0;
    for(int i = 0; i <= x; i++){     // count how many number greater then input n
        if(arr[i]>x) count ++;   
    }
    printf("Number of elements greater than %d: %d\n", x, count);   // print the number
    return 0;
}