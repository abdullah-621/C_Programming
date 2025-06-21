#include<stdio.h>
int main(){
    int n;
    printf("Enter n of e:");
    scanf("%d",&n);
    int targat;
    printf("Targat:");
    scanf("%d",&targat);

    int arr[n],found = 0;

    printf("Enter Element:\n");
    for (int i = 0; i < n; i++)
    {
       scanf("%d",&arr[i]);
       if (arr[i] == targat)
       {
        found = 1;
       } 
    }

    if (found == 1)
    {
        printf("Yes");
    }
    else{
        printf("No");
    }
    
    
    return 0;
}