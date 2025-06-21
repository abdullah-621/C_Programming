#include<stdio.h>
#include<limits.h>
#define SIZE 8

int main(){

    int k;
    printf("Find the k-th minimum number of element (1-based index):");
    scanf("%d",&k);

    if (k < 0 || k > 8)
    {
        printf("Invalid value for k. It should be between 0 and %d\n", SIZE - 1);
        return 1;
    }
    
    int arr[8] = {5,3,7,9,12,2,1,6};

    int min_element = 0;
    int min_idx = -1;

    for (int i = 0; i < k; i++)
    {
        min_element = INT_MAX;

        for (int j = 0; j < 8; j++)
        {
            if (arr[j] < min_element)
            {
                min_element = arr[j];
                min_idx = j;
            } 
        }
        arr[min_idx] = INT_MAX;
    }
    printf("%d\n",min_element);

    return 0;
}

