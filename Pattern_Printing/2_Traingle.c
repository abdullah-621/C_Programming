#include<stdio.h>

int main(){
   int n;
   printf("Enter the row:");
   scanf("%d",&n);

   for (int i = 0; i < n; i++)
   {
        for (int j = 0; j < n - i; j++)
        {
            printf("*");
        }
        printf("\n");      
   }
   for (int i = 2; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}



