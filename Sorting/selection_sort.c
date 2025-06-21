#include<stdio.h>
#include<limits.h>

int main(){

    int n;
    printf("Enter number of elemnets :");
    scanf("%d",&n);

    int arr[n];
    
    printf("Enter Element :\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        int min_elements = INT_MAX;
        int min_index = -1;

        for (int j = i; j < n; j++)
        {
            if (arr[j] < min_elements)
            {
                min_elements = arr[j];
                min_index = j;
            }    
        }
        int temp = arr[min_index];    
        arr[min_index] = arr[i];
        arr[i] = temp;
    }
    printf("ascending Array:\n");
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}