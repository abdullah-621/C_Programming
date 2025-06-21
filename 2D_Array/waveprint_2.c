#include<stdio.h>
int main(){
    int m;
    printf("Enter no of Rows of the 1st matrix:");
    scanf("%d",&m);
    int n;
    printf("Enter no of Columns of the 1st matrix:");
    scanf("%d",&n);
    int arr[m][n];
    printf("\nEnter elements of 1st Matrix:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nWave Result Is:\n");
    for(int j=0;j<n;j++){
        if(j%2==0){
            for(int i=m-1;i>=0;i--){
                printf("%d ",arr[i][j]);
            }
        }
        else{
            for(int i=0;i<m;i++){
                printf("%d ",arr[i][j]);
             }
        }
        //printf("\n");
    }
    
    return 0;
}