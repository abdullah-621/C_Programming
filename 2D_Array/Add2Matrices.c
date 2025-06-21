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
            printf("Enter the 1st matricr of %d %d term:",i,j);
            scanf("%d",&arr[i][j]);
        }
    } 

    printf("\n\n");

    int brr[rows][columns];
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            printf("Enter the 2nd matries of %d %d term:",i,j);
            scanf("%d",&brr[i][j]);
        }
    } 
    
    int add[rows][columns];
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            add[i][j] = arr[i][j]+brr[i][j];
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            printf("%d ",add[i][j]);
        }
        printf("\n");
    }
    return 0;
}