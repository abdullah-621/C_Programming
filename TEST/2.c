// #include<stdio.h>
// #include<math.h>

// int main(){
//     int n;
//     printf("Enter Elements:");
//     scanf("%d",&n);

//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&arr[i]);
//         float cube = pow(arr[i] , 3);
//         printf("%d ^ 3 = %.0f\n",arr[i],cube);
//     }
//     return 0;
// }

#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("Enter Elements:");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        float cube = pow(i , 3);
        printf("%d ^ 3 = %.0f\n",i,cube);
    }
    return 0;
}