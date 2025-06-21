// #include<stdio.h>
// #include<string.h>
// int main(){
//     int N;
//     scanf("%d",&N);

//     int arr[2*N];
//     int count = 0;

//     for (int i = 0; i < 2*N; i++)
//     {
//         scanf("%d",&arr[i]);
//     }

//     for (int i = 0; i < 2 * N - 2; i++)
//     {
//         if (i % 2 == 0)
//         {
//             if (arr[i] == arr[i+2])
//             {
//                 count++;
//             } 
//         }
//         else
//         {
//             if (arr[i] == arr[i+2])
//             {
//                 count++;
//             }    
//         }  
//     }
//     printf("%d\n",count);

//     return 0;
// }

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[2 * N];
    int count = 0;

    for (int i = 0; i < 2 * N; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 2 * N - 2; i++) { // Adjust loop condition to avoid out-of-bounds access
        if (arr[i] == arr[i + 2]) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
