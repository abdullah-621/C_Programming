#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];

    int flag_max = INT_MIN;
    int max_element = 0;
    int max_idx = -1;

    int flag_min = INT_MAX;
    int min_element = 0;
    int min_idx = -1;

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > flag_max)
        {
            flag_max = arr[i];
            max_element = arr[i];
            max_idx = i;
        }
        if (arr[i] <= flag_min)
        {
            flag_min = arr[i];
            min_element = arr[i];
            min_idx = i;
        } 
    }
    int minimum_swapping = abs((n-1) - min_idx) + max_idx;

    if (max_idx > min_idx)
    {
        minimum_swapping--;
    }
    

    printf("%d",minimum_swapping);
   
    return 0;
}