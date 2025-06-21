#include<stdio.h>
int row_sum(int brr[],int col){
    int sum = 0;
    for (int i = 0; i < col; i++)
    {
        sum += brr[i];
    }
    return sum;
}

int main(){
    int n,m;
    printf("Enter the rows and columns:");
    scanf("%d%d",&n,&m);

    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&arr[i][j]);
        }     
    }
    
    int sum = 0;
    int max_row = 0;
    for (int i = 0; i < m; i++)
        {
            int max_sum = row_sum(arr[i],m);
            if (sum < max_sum)
            {
                sum = max_sum;
                max_row = i;
            }           
        } 
    printf("The Max Row Is %d",max_row+1);

    return 0;
}
