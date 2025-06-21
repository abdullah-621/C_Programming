#include<stdio.h>
#include<string.h>

int main(){
    char borze_code[201];
    scanf("%s",borze_code);

    int length = strlen(borze_code);
    char result[201];
    int index = 0;

    for (int i = 0; i < length; i++)
    {
        if (borze_code[i] == '.')
        {
            result[index++] = '0';
        }
        else if (borze_code[i] == '-' && borze_code[i+1] == '.')
        {
            result[index++] = '1';
            i++;
        }
        else if (borze_code[i] == '-' && borze_code[i+1] == '-')
        {
            result[index++] = '2';
            i++;
        }
    }
    result[index] = '\0';
    printf("%s\n",result);
    
    return 0;
}
