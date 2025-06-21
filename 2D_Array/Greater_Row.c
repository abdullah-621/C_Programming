#include<stdio.h>

int Sum_Rows(int Rows[],int columns){
    int sum = 0;
    for (int i = 0; i < columns; i++)
    {
        sum += Rows[i];
    }
    return sum;
}
int main(){
    int rows,columes;
    printf("Enter Rows And Columns:");
    scanf("%d%d",&rows,&columes);

    int arr[rows][columes];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columes; j++)
        {
            scanf("%d",&arr[i][j]);
        }    
    }
    
    int Max_Sum = 0;
    int Max_Row = 0;

    for (int i = 0; i < rows; i++)
    {
        int sum = Sum_Rows(arr[i],columes);
        if (sum > Max_Sum)
        {
           Max_Sum = sum;
           Max_Row = i;
        }
        
    }
    printf("Maximum Sum Of %d Index & Its Sum Is :%d\n",Max_Row + 1,Max_Sum);

    return 0;
}

