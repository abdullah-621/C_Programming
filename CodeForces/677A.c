#include<stdio.h>
int main(){

    int n, h;
    scanf("%d%d",&n,&h);

    int wide = 0;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);

        if (a[i] <= h)
        {
            wide += 1;
        }
        else
        {
            wide += 2;
        }   
    }
    
    printf("%d",wide);

    return 0;
}