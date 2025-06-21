// #include<stdio.h>

// int main(){
//    int n;
//    printf("Enter the row:");
//    scanf("%d",&n);

//    for (int i = 0; i < n; i++)
//    {
//         for (int j = 0; j < i; j++)
//         {
//             printf(" ");
//         }
//         for (int k = 0; k < n-1; k++)
//         {
//             printf("*");
//         }
//         for (int l = 0; l < n - i - 1; l++)
//         {
//            printf(" ");
//         }
        
//         printf("\n");
//    }
   
//     return 0;
// }


#include<stdio.h>

int main(){
   int n;
   printf("Enter the row:");
   scanf("%d",&n);

   for (int i = 0; i < n; i++)
   {
        for (int l = 0; l < n - i - 1; l++)
        {
           printf(" ");
        }
        for (int k = 0; k < n-1; k++)
        {
            printf("#");
        }
        
        printf("\n");
   }
   
    return 0;
}




