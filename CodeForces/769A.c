
// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int n;
//     printf("Enter the number of years: ");
//     scanf("%d", &n);

//     int years[n];
//     printf("Enter the years:\n");
//     for (int i = 0; i < n; ++i) {
//         scanf("%d", &years[i]);
//     }

//      // Bubble sort to sort the array
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             if (years[j] > years[j+1])
//             {
//                 int temp = years[j];
//                 years[j] = years[j+1];
//                 years[j+1] = temp;
//             }            
//         }       
//     }
//     int median = years[(n - 1) / 2];
//     printf("%d",median);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);
//     int years[n];
//     for (int i = 0; i < n; ++i) {
//         scanf("%d", &years[i]);
//     }
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             if (years[j] > years[j+1])
//             {
//                 int temp = years[j];
//                 years[j] = years[j+1];
//                 years[j+1] = temp;
//             }            
//         }       
//     }
//     int median = years[(n - 1) / 2];
//     printf("%d",median);

//     return 0;
// }

#include <stdio.h>
int b = 10;
//int b = 20;
int main() {
   printf("%d\n",b);
   sum();
    return 0;
}
void sum(){
    printf("%d",a);
}