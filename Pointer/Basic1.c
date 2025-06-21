// #include<stdio.h>
// int main(){
//     char x = 'A';
//     char *p;
//     p = &x;
    
//     printf("Value of X : %c\n",x);
//     printf("%p\n",&x);
//     printf("Value of X : %c\n",*p);

//     return 0;
// }

#include<stdio.h>
int main(){
    int x = 10;
    int* ptr = &x;
    //ptr = &x;
    
    printf("%d\n",x);
    printf("%d\n",*ptr);
    printf("%p\n",&x);
    printf("%p\n",ptr);
    
    return 0;
}