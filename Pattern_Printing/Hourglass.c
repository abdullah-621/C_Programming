#include<stdio.h>

int main(){
   int n;
   printf("Enter the row:");
   scanf("%d",&n);
   int nst = 2 * n - 1;
   int nsp = 0;
   int ml =  1;

   for (int i= 0; i < n ; i++)
   {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= 2 * (n - i) - 1; k++)
        {
            printf("%d",k);
        }
        
        printf("\n");
   }
   for (int i = 1; i <= n - 1; i++)
   {
        for (int j = i; j < n - 1 ; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= (2 * i + 1); k++)
        {
            printf("%d",k);
        }
        printf("\n");
   }
   
    return 0;
}
