#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char s[100];
    scanf("%s",s);

    int count_lowercase = 0;
    int count_uppercase = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <='z')
        {
            count_lowercase++;
        }
        if (s[i] >= 'A' && s[i] <='Z')
        {
            count_uppercase++;
        }      
    }

    if (count_lowercase > count_uppercase)
    {
        for (int i = 0; s[i] != '\0'; i++)
        {
            s[i] = tolower(s[i]);
        }
        
    }
    else if (count_lowercase == count_uppercase)
    {
        for (int i = 0; s[i] != '\0'; i++)
        {
            s[i] = tolower(s[i]);
        }
    }
    else
    {
        for (int i = 0; s[i] != '\0'; i++)
        {
            s[i] = toupper(s[i]);
        }
    }
    printf("%s",s);
    return 0;
}