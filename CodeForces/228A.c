#include<stdio.h>

int main(){
    int s1,s2,s3,s4;
    scanf("%d%d%d%d",&s1,&s2,&s3,&s4);

    int need_shoes = 0;

    if (s1 == s2 || s1 == s3 || s1 == s4)
    {
        need_shoes++;
    }
    if (s2 == s3 || s2 == s4)
    {
        need_shoes++;
    }
    if (s3 == s4)
    {
        need_shoes++;
    }
    
    printf("%d",need_shoes);
    
    return 0;
}

