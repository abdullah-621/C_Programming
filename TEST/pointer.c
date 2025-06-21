#include<stdio.h>
int main(){
   int arr[3][4];
   for (int i = 0; i < 3; i++)
   {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d",&arr[i][j]);
        }  
   }
   for (int i = 0; i < 3; i++)
   {
        for (int j = 0; j < 4; j++)
        
            if (arr[i][j] % 2 == 0)
            {
                arr[i][j] = 1;
            }
            else{
                arr[i][j] = -1;
            }      
        }  

   for (int i = 0; i < 3; i++)
   {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ",arr[i][j]);
        }  
        printf("\n");
   }
   
    return 0;
}