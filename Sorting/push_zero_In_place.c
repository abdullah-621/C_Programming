#include<stdio.h>

int main(){

    int arr[9] = {1,3,0,5,0,6,0,5,0};
    //int ans[9];

    int idx = 0;
    for (int i = 0; i < 9; i++)
    {
       for (int j = 0; j < 9 - 1 - i; j++)
       {
            if (arr[j] == 0)
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }   
       }  
    }


    for (int i = 0; i < 9; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}
