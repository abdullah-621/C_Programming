#include<stdio.h>
int main(){

    int n,pi,qi;
    scanf("%d",&n);

    int count = 0;
    
    for (int i = 0; i < n; i++)
    {    
        scanf("%d%d",&pi,&qi);
        if (qi - pi >= 2)
        {
            count++;
        }    
    }
    printf("%d",count);
    return 0;
}

