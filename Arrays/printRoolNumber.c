#include<stdio.h>
int main(){
    int marks[10] = {45,65,75,23,22,56,30,45,76,11};
    for (int i = 0; i < 10; i++)
    {
        // printf("Enter %d Number:",i+1);
        // scanf("%d",&marks[i]);
        if(marks[i] < 35) printf("%d\n",i);
    }
    // int size = 10,b[size];
    // printf("%d",size);
    
    return 0;
}