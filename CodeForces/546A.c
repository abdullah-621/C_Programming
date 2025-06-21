#include<stdio.h>
int main(){
    int k,n,w;
    scanf("%d%d%d",&k,&n,&w);

    int Total_Cost = 0;
    for (int i = 1; i <= w; i++)
    {
        Total_Cost += k*i;
    }
    
    if (Total_Cost > n)
    {
        printf("%d",Total_Cost - n);
    }
    else 
    {
        printf("0");
    }
    
    return 0;
}