#include<stdio.h>
int main(){
    int x = 10;
    int *prt = &x;
    printf("%d\n",x);
    printf("%p\n",&x);
    printf("%p\n",prt);
    
    char ch = 'a';
    char *ptr;
    ptr = &ch;
    printf("%c\n",ch);
    printf("%c\n",*ptr);

    int a = 10;
    int b = 20;
    int *ptr1, *ptr2;
    ptr1 = &a;
    ptr2 = &b;
    int sum;
    sum = *ptr1 + *ptr2;
    printf("Sum:%d",sum);
    return 0;
}