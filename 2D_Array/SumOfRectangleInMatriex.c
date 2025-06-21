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

    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){   // Total matrix print
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
     printf("\n");
    
    for(int i=0;i<rows-1;i++){
        for(int j=1;j<columns;j++){   // Print rectangal in matrix 
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    int sum2 = 0;
    for(int i=0;i<rows-1;i++){
        for(int j=1;j<columns;j++){    // sum of ractengle matrix
            sum2 = sum2 + arr[i][j];
        }
    }
    printf("%d ",sum2);

    return 0;
}