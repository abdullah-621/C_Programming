#include<stdio.h>
int main(){

    int arr[10];
    int duplicate = 0;
    
    printf("Enter Element :");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);

        if (arr[i] == arr[i+1])
        {
            duplicate = arr[i];
        }      
    }
    for (int i = 0; i < 10; i++)
    {
        for(int j = i + 1;j < 10; j++)

        if (arr[i] == arr[j])
        {
            duplicate++;
        }    
    }
    printf("Duplicate Elements Is %d times",duplicate);
    return 0;
}