#include<stdio.h>
#include<stdbool.h>
int main(){
     int arr[9] = {1, 2, 3, 4, 5, 4, 3, 2, 1};
     int n = sizeof(arr) / sizeof(arr[0]);
     for(int i=0;i<=n-1;i++){
        bool flag = false;
        for(int j=i+1;j<=n-1;j++){
            if(arr[i]==arr[j]){
                flag = true;
            }
        }
        if(flag==false){
            printf("The Unique element is : %d\n",arr[i]);
            break;
        }
     }
     
    return 0;
}