#include<stdio.h>
int main(){
    int n,k;
    scanf("%d%d",&n,&k);

    int last_digite = 0;
    for (int i = 0; i < k; i++)
    {
        if (n % 10 != 0)
        {
            n = n - 1;
        }
        else
        {
            n = n / 10;
        }          
    }
    printf("%d",n);
    
    return 0;
}