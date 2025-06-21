#include<stdio.h>
int main(){

    int y;
    scanf("%d",&y);

    int last = 0;
    while (1)
    {
        y++;

        last = y % 10;
        y /= 10;

        if ( last != y % 10)
        {
            printf("%d",y);
            break;
        }
    }
    
    return 0;
}