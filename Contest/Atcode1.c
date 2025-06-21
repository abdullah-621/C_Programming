#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);

    char S[1000];
    char taka[] = "Takahashi";
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%s",S);
        if (strcmp(S,taka) == 0)
        {
            count++;
        }    
    }
    printf("%d\n",count);
    
    return 0;
}