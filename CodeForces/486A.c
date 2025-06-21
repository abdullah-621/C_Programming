// #include<stdio.h>
// int main(){

//     int n;
//     scanf("%d",&n);

//     int calculate = 0;

//     for (int i = 1; i <= n; i++)
//     {
//         if (i % 2 != 0)
//         {
//             calculate -= i;
//         }
//         else
//         {
//             calculate += i;
//         }   
//     }
//     printf("%d\n",calculate);
//     return 0;
// }

#include <stdio.h>

int main() {
    long long n;  // Use long long to handle larger values of n
    scanf("%lld", &n);

    long long result;
    if (n % 2 == 0) {
        result = n / 2;
    } else {
        result = -(n / 2 + 1);
    }

    printf("%lld\n", result);
    return 0;
}

