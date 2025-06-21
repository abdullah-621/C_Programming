#include<stdio.h>
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int x = 10;
    int y = 30;

    printf("Befor Swapping \n x = %d \n y = %d\n",x,y);
    swap(&x,&y);
    printf("After Swapping \n x = %d \n y = %d\n",x,y);

    return 0;
}