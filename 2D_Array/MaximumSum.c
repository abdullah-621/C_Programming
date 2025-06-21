#include<stdio.h>
int main(){
    int rows;
    printf("Enter the number of rows:");
    scanf("%d",&rows);

    int columns;
    printf("Enter the number of columns:");
    scanf("%d",&columns);

    int arr[rows][columns];
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            printf("Enter the %d %d term:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    int MaxSum = 0;
    int idx = 0;
    for(int i=0;i<rows;i++){
        int sum = 0;
        for(int j=0;j<columns;j++){
             sum += arr[i][j];
             idx = i;
        }
        if(sum > MaxSum){
            MaxSum = sum;
        }
    }
     for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("The value of maximum sum is :%d\n",MaxSum);
    printf("Row with maximum sum: %d", idx);
    return 0;
}