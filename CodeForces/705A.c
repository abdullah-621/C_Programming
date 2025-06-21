#include<stdio.h>
#include<string.h>

int main(){

    int n;
    scanf("%d",&n);

    char result[10000] = "";
    char hate[] = "I hate";
    char love[] = "I love";
    char that[] = " that ";
    char it[] = " it";

    for (int i = 1; i <= n; i++)
    {
        if(i % 2 != 0){
            strcat(result, hate);
        }
        else
        {
            strcat(result, love);
        }
        if (i < n)
        {
            strcat(result, that);
        }  
    }
    
    strcat(result, it);

    printf("%s\n",result);

    return 0;
}