#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[8] = {8, 7, 6, 5, 4, 3, 2, 1};
    int max = INT_MIN;
    int smax = INT_MIN;
    // for(int i = 0; i<=7;i++){        /*    Using 2 loops   */
    //     if(max < arr[i]){
    //         max = arr[i];
    //     }
    // }
    // for(int i = 0; i<=7;i++){
    //     if(max!=arr[i] && smax < arr[i]){
    //         smax = arr[i];
    //     }
    // }
    for (int i = 0; i <= 7; i++)
    { /* using 1 loops */
        if (max < arr[i])
        {
            smax = max;   // smax is now privious max
            max = arr[i]; // max is now new max
        }
        else if (smax < arr[i] && max != arr[i])
        {
            smax = arr[i];
        }
    }
    printf("\n\nThe Second maximam number is : %d\n\n", smax);
    return 0;
}