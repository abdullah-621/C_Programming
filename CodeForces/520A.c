#include<stdio.h>
#include<ctype.h>
int main(){
    int n;
    scanf("%d",&n);

    char pan[n];
    scanf("%s",pan);
    char check = 'a';

    for (int i = 0; pan[i] != '\0'; i++)
    {
        if (pan[i] == 'a')
        {
            check++;
        }
    }

    return 0;
}

