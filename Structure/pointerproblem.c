#include<stdio.h>
int main(){
    
    typedef int* pointer;
    int x = 5, y = 8;

    pointer a = &x,b = &y;
    printf("%p\n%p",a,b);
    return 0;
}