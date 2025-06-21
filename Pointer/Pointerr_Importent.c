#include<stdio.h>
int main(){
    int a = 25;
    int *x = &a;
    *x = 5;
    printf("%p\n",x);    // print the address of a
    printf("%p\n",&x);   // print the address of x
    printf("%d\n",*x);   // The address of the variable inside x will print the value at the address
    printf("%d",a);      // a is changed.
    return 0;
}