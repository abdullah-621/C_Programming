#include<stdio.h>

int main(){
   int n;
   printf("Enter the row:");
   scanf("%d",&n);
    
    int nsp = n / 2 ;
    int nst = 1;
    int ml = n / 2 + 1;

   for (int i= 1; i <= n; i++)
   {
        for (int j = 1; j <= nsp; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= nst; k++)
        {
           printf("* ");
        }   
        if (i < ml)
        {
            nsp --;
            nst ++;
        }
        else{
            nsp ++;
            nst --;
        }
        printf("\n");
   }
   
    return 0;
}

// #include <stdio.h> 
// int main() 
// { 
//     int n = 5; 
  
//     // first outer loop to iterate through each row 
//     for (int i = 0; i < 2 * n - 1; i++) { 
  
//         // assigning values to the comparator according to 
//         // the row number 
//         int comp; 
//         if (i < n) { 
//             comp = 2 * (n - i) - 1; 
//         } 
//         else { 
//             comp = 2 * (i - n + 1) + 1; 
//         } 
  
//         // first inner loop to print leading whitespaces 
//         for (int j = 0; j < comp; j++) { 
//             printf(" "); 
//         } 
  
//         // second inner loop to print number 
//         for (int k = 0; k < 2 * n - comp; k++) { 
//             printf("* ", k + 1); 
//         } 
//         printf("\n"); 
//     } 
//     return 0; 
// }