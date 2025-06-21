#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[8] = {1,2,3,4,5,6,7,8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 4;
    int idx = 0;
    bool flag = false;
    for(int i=0;i<=n-1;i++){
       if(arr[i]==x){
        flag = true;
        idx = i;
        break;
       } 
    }
    if(flag==false) printf("%d is not preasent in array.",x);
    else printf("%d number is preasent in array & int index is %d",x,idx);
    return 0;
}