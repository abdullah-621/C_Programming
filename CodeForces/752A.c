// #include<stdio.h>
// int main(){
//     int n,m;
//     printf("Enter row and column number:");
//     scanf("%d%d",&n,&m);

//     int arr[n][m];

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             scanf("%d",&arr[i][j]);
//         }
        
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (arr[i][j] == 9)
//             {
//                 printf("(%d,%d)",i+1,j+1);
//             }
            
//         }
//     }
    
//     return 0;
// }

#include <stdio.h>

int main() {
    int n, m, k, p;
    scanf("%d %d %d", &n, &m, &k);
    scanf("%d", &p);

    int desk_index = (p - 1) / 2;

    int row = desk_index / m;
    int column = desk_index % m;

    char side = (p % 2 == 1) ? 'L' : 'R';

    printf("%d %d %c\n", row , column , side);

    return 0;
}
