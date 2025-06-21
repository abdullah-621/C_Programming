#include<stdio.h>
#include<string.h>
int main(){

    char num1[101],num2[101];

    scanf("%100s",num1);
    scanf("%100s",num2);

    int length = strlen(num1);
    char result[101];

    for (int i = 0; i < length; i++)
    {
        if (num1[i] == num2[i])
        {
            result[i] = '0';
        }
        else
        {
            result[i] = '1';
        }      
    }
    result[length] = '\0';
    
    printf("%s",result);
    
    return 0;
}

