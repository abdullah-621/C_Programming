#include<stdio.h>

void print(int arr2[3][3]){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t",arr2[i][j]);
        }
        printf("\n");       
    }    
}

int main(){

    int arr1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    print(arr1);

    return 0;
}