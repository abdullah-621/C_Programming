#include<stdio.h>
#include<limits.h>
int main(){
    int rows;
    printf("Enter the number of rows:");
    scanf("%d",&rows);

    int columns;
    printf("Enter the number of columns:");
    scanf("%d",&columns);

    int max = 0;
    int index_of_I = 0;
     int index_of_J = 0;
     
    int arr[rows][columns];
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            printf("Enter the %d %d term:",i,j);
            scanf("%d",&arr[i][j]);
            if(max < arr[i][j]){
                max = arr[i][j];
                index_of_I = i;
                index_of_J = j;
            }
        }
    } 
    printf("The maximam Elements of the matrix is : %d\n",max);
    printf("Its Index is:(%d,%d) ",index_of_I,index_of_J);
    return 0;
}