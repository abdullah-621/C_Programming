// #include<stdio.h>
// int main(){
//     int arr[3][3];

//     int sum  = 0;
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3;j++)
//         {
//             scanf("%d",&arr[i][j]);  
//             if ((i == 0 && j == 0) || (i == 1 && j == 1) || (i == 2 && j == 2))
//             {
//                 sum += arr[i][j];
//             }
//             if ((i == 2 && j == 0) || (i == 1 && j == 1) || (i == 0 && j == 2))
//             {
//                 sum += arr[i][j];
//             } 
//         }      
//     }

//     // sum += arr[0][0];
//     // sum += arr[1][1];
//     // sum += arr[2][2];

//     printf("Sum is :%d",sum);
//     return 0;
// }

#include <stdio.h>

int main() {
    int n,m;
    printf("Enter row & columns (same):");
    scanf("%d%d",&n,&m);
    int arr[n][m];

    int sumLeftDiagonal = 0;
    int sumRightDiagonal = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
            // Calculate the sum of the left diagonal
            if (i == j) {
                sumLeftDiagonal += arr[i][j];
            }
            // Calculate the sum of the right diagonal
            if (i + j == (n-1)) { // size - 1, here size is 3
                sumRightDiagonal += arr[i][j];
            }
        }
    }

    printf("Sum of left diagonal is: %d\n", sumLeftDiagonal);
    printf("Sum of right diagonal is: %d\n", sumRightDiagonal);

    if (sumLeftDiagonal > sumRightDiagonal)
    {
        printf("Sum of Left Diagonal Is greater then Right Diagonal");
    }
    else if(sumLeftDiagonal == sumRightDiagonal)
    {
        printf("Sum of Right Diagonal Is Equal to left Diagonal");
    }
    else{
        printf("Sum of Right Diagonal Is greater then Left Diagonal");
    }
    
    
    return 0;
}
