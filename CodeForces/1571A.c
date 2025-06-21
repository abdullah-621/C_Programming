#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    
    while (t--)
    {
        char s[101];
        scanf("%s",s);
        int len = strlen(s);

        int has_less = 0, has_greater = 0;

        for (int i = 0; i < len; i++)
        {
            if (s[i] == '<')
            {
                has_less = 1;
            }
            else if (s[i] == '>')
            {
                has_greater = 1;
            }        
        }
         if (has_less && has_greater)
         {
            printf("?\n");
         }
         else if (has_less)
         {
            printf("<\n");
         }
         else if (has_greater)
         {
            printf(">\n");
         }
         else{
            printf("=\n");
         }
         
    }
    
    return 0;
}