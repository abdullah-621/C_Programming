#include<stdio.h>
int main(){

    int n,m;
    printf("Enter Row & Columns:");
    scanf("%d%d",&n,&m);

    int arr[n][m];
    int sum1 = 0, sum2 = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&arr[i][j]);
            if (i == j)
            {
                sum1 += arr[i][j];
            }     
            if (i + j == n - 1)
            {
                sum2 += arr[i][j];
            }      
        }    
    }
    printf("The Sum of Diogonal Is : %d & %d",sum1,sum2);
    return 0;
}