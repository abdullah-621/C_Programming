#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows and columns:");
    scanf("%d",&n);

    printf("Enter all the elements\n");
    int arr[n][n];
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i = 0;i < n;i++){
        for(int j = i;j < n;j++){  // j=i => because of again swaping
              
            int temp = arr[i][j];  // transpose
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
           // break;
        }
    }
    printf("\n");
    for(int i = 0 ;i < n;i++){
        for(int j = 0;j  <n;j++){
           printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}