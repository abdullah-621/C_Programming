#include<stdio.h>
int main(){
    int arr[] = {10,11,12,13,14,15};

    int *ptr = arr;
    for (int i = 0; i < 6; i++)
    {
        printf("Element %d :%d\n",i,*ptr + i);
    }

    *(ptr + 3) = 78; //change value using pointer 

    int i = 0;
    while (i < 6)
    {
        printf("Element %d :%d\n",i,*ptr);
        ptr++;
        i++;
    }
    
    
    return 0;
}