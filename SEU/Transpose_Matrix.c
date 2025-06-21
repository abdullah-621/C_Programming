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
            // if (i + j == j + i)
            // {
            //     int temp = arr[i][j];
            //     arr[i][j] = arr[j][i];
            //     arr[j][i] = temp;
            // }       
        }    
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ",arr[j][i]);   
        }    
        printf("\n");
    }
    
    return 0;
}
