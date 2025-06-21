#include<stdio.h>
#include<stdlib.h>

int main(){

    int matrix[5][5];
    int row = 0, columns = 0;

    for (int i = 0; i < 5; i++){

        for (int j = 0; j < 5; j++)
        {
            scanf("%d",&matrix[i][j]);
            if (matrix[i][j] == 1)
            {
                row = i + 1;
                columns = j + 1;
                break;
            }
        }    
    }

    int moves = (abs(row - 3) + abs(columns - 3));

    printf("%d",moves);
    return 0;
}

