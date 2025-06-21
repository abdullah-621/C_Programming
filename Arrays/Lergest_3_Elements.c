#include <stdio.h>

int main()
{
    // int n;
    // scanf("%d", &n);
    int arr[10] = {12, 34, 56, 76, 45, 3, 45, 65, 200, 40};

    // scanf("%d", &arr[0]);
    int max = arr[0];

    for (int i = 1; i <= 10; i++)
    {
        // scanf("%d", &arr[i]);
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("Max Element Is: %d\n", max);
    return 0;
}
