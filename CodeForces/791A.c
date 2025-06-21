#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);

    int year = 0;
    for (int i = 0; a <= b; i++)
    {
        year++;
        a = a*3;
        b = b*2;        
    }
    
    printf("%d\n",year);
    return 0;
}