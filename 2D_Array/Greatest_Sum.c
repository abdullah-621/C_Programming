// #include <stdio.h>

// int main() {
//     int n,m;
//     printf("Enter row & columns (same):");
//     scanf("%d%d",&n,&m);
//     int arr[n][m];
//     int test_sum = 0;
//     int sum = 0;

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             scanf("%d", &arr[i][j]);
            
//             if (i == 0) {
//                 sum += arr[i][j];
//             }
            
//             if (i == 1) { 
//                 sumRightDiagonal += arr[i][j];
//             }
//         }
//     }

//     printf("Sum of left diagonal is: %d\n", sumLeftDiagonal);
//     printf("Sum of right diagonal is: %d\n", sumRightDiagonal);

//     if (sumLeftDiagonal > sumRightDiagonal)
//     {
//         printf("Sum of Left Diagonal Is greater then Right Diagonal");
//     }
//     else if(sumLeftDiagonal == sumRightDiagonal)
//     {
//         printf("Sum of Right Diagonal Is Equal to left Diagonal");
//     }
//     else{
//         printf("Sum of Right Diagonal Is greater then Left Diagonal");
//     }
    
    
//     return 0;
// }
#include <stdio.h>

int main() {
    int arr[3][3];
    int rowSum[3] = {0, 0, 0};

    // Read the 3x3 array
    printf("Enter the elements of the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
            // Calculate the sum of the current row
            rowSum[i] += arr[i][j];
        }
    }

    // Find the row with the largest sum
    int maxRowIndex = 0;
    for (int i = 1; i < 3; i++) {
        if (rowSum[i] > rowSum[maxRowIndex]) {
            maxRowIndex = i;
        }
    }

    // Print the result
    printf("The row with the largest sum is row %d with a sum of %d.\n", maxRowIndex + 1, rowSum[maxRowIndex]);

    return 0;
}
