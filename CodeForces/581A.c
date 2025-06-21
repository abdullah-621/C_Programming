#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);

    int different_socks = 0;
    int rest = 0;
    int same_socks = 0;

    if(a < b)
    {
        different_socks = a;
        rest = b - a;
        same_socks = rest / 2;
        printf("%d %d",different_socks,same_socks);
    }
    else
    {
        different_socks = b;
        rest = a - b;
        same_socks = rest / 2;
        printf("%d %d",different_socks,same_socks);
    }
    
    
    return 0;
}