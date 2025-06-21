// #include<stdio.h>

// int fibo(int a){
    
// }
// int main(){
//     int n, arr[n];
//     printf("Enter the element of the array :");
//     scanf("%d",&n);

//     for (int i = 0; i <= n; i++)
//     {
//         printf("Enter %d no element :",i);
//         scanf("%d",&arr[i]);
//     }
    

//     printf("The fibonaci of %dth term is = %d",n,fibo(n));
//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t); // Read number of test cases

    while (t--) {
        char s[101]; // Given string has a length up to 100
        scanf("%s", s);

        int days = 1; // At least one day is needed
        int used[26] = {0}; // Array to keep track of used characters
        int distinct_count = 0;

        for (int i = 0; s[i] != '\0'; ++i) {
            int idx = s[i] - 'a';
            if (!used[idx]) {
                if (distinct_count == 3) {
                    // If we already used 3 distinct characters, start a new day
                    days++;
                    memset(used, 0, sizeof(used)); // Reset the used array
                    distinct_count = 0;
                }
                used[idx] = 1;
                distinct_count++;
            }
        }

        printf("%d\n", days);
    }

    return 0;
}
