#include<stdio.h>
int main(){
     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

     int n = sizeof(arr) / sizeof(arr[0]);
     int terget = 3;

     int i = 0;
     int j = n - 1;

     while (i < j)
     {
        if (arr[i] + arr[j] == terget)
        {
            printf("%d and %d ",i,j);
            break;
        }
        else if (arr[i] + arr[j] > terget)
        {
            j--;
        }
        else
        {
            i++;
        }     
     }
     
    return 0;
}