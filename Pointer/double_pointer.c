#include<stdio.h>
int main(){

    int x = 10;
    int *p;
    p = &x;
    int **q;
    q = &p;

    printf("%d\n",x);
    printf("%d\n",*p);
    printf("%d\n",**q);

    return 0;
}