#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    char s[n];
    scanf("%s",s);

    int Anton_Count = 0;
    int Danik_Count = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'A')
        {
            Anton_Count++;
        }
        else{
            Danik_Count++;
        }     
    }
    if (Anton_Count > Danik_Count)
    {
       printf("Anton");
    }
    else if (Anton_Count == Danik_Count)
    {
        printf("Friendship");
    }
    else
    {
        printf("Danik");
    }
    
    return 0;
}