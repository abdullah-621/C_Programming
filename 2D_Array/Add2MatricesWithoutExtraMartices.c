#include<stdio.h>

#define ROWS 3
#define COLS 3

void addMatrix(int matrix1[ROWS][COLS],int matrix2[ROWS][COLS]){
    for(int i=0;i<ROWS;i++){
        for(int j=0;j<COLS;j++){
            matrix1[i][j] += matrix2[i][j];   // All Operators can be given here {+, -, *, /, %}
        }
    }
}
void printMatrix(int matrix[ROWS][COLS]){
    for(int i=0;i<ROWS;i++){
        for(int j=0;j<COLS;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int matrix1[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrix2[ROWS][COLS] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};

    printf("\nMatrix 1:\n");
    printMatrix(matrix1);

    printf("\nMatrix 2:\n");
    printMatrix(matrix2);

    addMatrix(matrix1,matrix2);

    printf("\nResult after adding Matrix 2 to Matrix 1:\n");
    printMatrix(matrix1);
   

    return 0;
}