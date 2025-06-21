// #include<stdio.h>
// int main(){
//     int n = 4;
    
//     for (int i = 0; i < n; i++)
//     {
//          char ch = 97;
//         for (int j = 0; j < 2*n - 1 - (2*i); j++)
//         {          
//             printf("%c",ch++);
//         }       
//         printf("\n");
//     }
    
//     return 0;
// }

// #include <stdio.h>
// #include<math.h>

// int main() {
//     int x, n, i, sum = 0;

//     printf("Enter the value of x: ");
//     scanf("%d", &x);
//     printf("Enter the number of terms (n > 0): ");
//         scanf("%d", &n);
        
//     if (n > 0)
//     {
//         for (i = 1; i <= n; i++) {
//         sum += pow(x, i);
//         }
//         printf("The sum of the series (x + x^2 + ... + x^n) is: %d\n", sum);
//     }
//     else{
//         printf("Please Inter positive Integer");
//     }
//     return 0;
// }


#include <stdio.h>
#include <stdlib.h> // Include this for abs function

int main() {
    int arr[8] = {3, 89, 7, 9, 15, 19, 45, 50};
    int max_difference = 0;

    for (int i = 0; i < 7; i++) {
        int dif = abs(arr[i] - arr[i + 1]);
        if (dif > max_difference) {
            max_difference = dif;
        }
    }

    printf("Maximum difference is: %d\n", max_difference);
    return 0;
}
