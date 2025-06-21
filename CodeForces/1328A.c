#include<stdio.h>

int main(){

    int t,a,b;
    scanf("%d",&t);

    while (t--)
    {
        int moves = 0;
        scanf("%d%d",&a,&b);

        if(a % b != 0)
        {
            moves = b - a % b;   
        }          
        printf("%d\n",moves); 
    }
    return 0;
}

