#include<stdio.h>
int main(){
    int rows;
    printf("Enter the number of rows:");
    scanf("%d",&rows);

    int columns;
    printf("Enter the number of columns:");
    scanf("%d",&columns);

    int arr[rows][columns];
    for(int i = 0;i < rows;i++){
        for(int j = 0;j < columns;j++){
            printf("Enter the %d %d term:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Original Matrix.\n");
    for(int i = 0;i < rows;i++){
        for(int j = 0;j < columns;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    int brr[rows][columns];
    for(int i = 0;i < columns;i++){
        for(int j = 0;j < rows;j++){            // Store the matrix
            brr[i][j] = arr[j][i];
        }
    }

    printf("Transpose Matrix.\n");
    for(int i = 0;i < columns;i++){
        for(int j = 0;j < rows;j++){
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}