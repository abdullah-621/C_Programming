#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);

    int arr[n];
    int is_easy = 1;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        if (arr[i] == 1)
        {
            is_easy = 0;
        }  
    }
    if (is_easy)
    {
        printf("EASY");
    }
    else
    {
        printf("HARD");
    }
    
    return 0;
}

