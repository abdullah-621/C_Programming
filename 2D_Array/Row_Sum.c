#include<stdio.h>
int main(){

    int arr[3][3];
    int sum;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    
    for (int i = 0; i < 3; i++)
    {
       int sum1 = 0;

        for (int j = 0; j < 3; j++)
        {
            printf("%d ",arr[i][j]);
            sum1 += arr[i][j];
        }
        printf("\tSum of %d rows:%d",i+1,sum1);
        printf("\n");
    }
    return 0;
}