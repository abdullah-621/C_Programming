#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    scanf("%s",s);

    int length = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            length++;
        }
        
    }  
    printf("%d",length); 
    
    return 0;
}

