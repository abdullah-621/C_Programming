#include<stdio.h>
void swapping(int *ptr1, int *ptr2){

    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("\nAfter swapping:\n");
    printf("x = %d\ny = %d",*ptr1,*ptr2);

}
int main(){

    int x = 10, y = 20, temp;

    printf("Before swapping:\n");
    printf("x = %d\ny = %d\n",x,y);

    swapping(&x,&y);
    return 0;
}