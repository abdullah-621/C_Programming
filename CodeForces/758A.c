#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int a[n];
    int hight_burle = 0;
    int S = 0;

    for (int i = 0; i < n; i++)
    {
        if ( hight_burle < a[i])
        {
            hight_burle = a[i];
        } 
        S += (hight_burle - a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        S += (hight_burle - a[i]);
    }

    printf("%d\n",S);
    
    return 0;
}