#include<stdio.h>
int main(){
    int x, y, z;
    printf("Enter the value of x:");
    scanf("%d",&x);
    printf("Enter the value of y:");
    scanf("%d",&y);
    printf("Enter the value of z:");
    scanf("%d",&z);

    int *p1, *p2, *p3;
    p1 = &x;
    p2 = &y;
    p3 = &z;

    if(*p1 > *p2 && *p1 > *p3){
        printf("\nThe lagest number is:%d",*p1);
    }
    if(*p2 > *p1 && *p2 > *p3){
        printf("\nThe lagest number is:%d",*p2);
    }
    if(*p3 > *p1 && *p3 > *p2){
        printf("\nThe lagest number is:%d",*p3);
    }
    return 0;
}