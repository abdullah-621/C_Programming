#include<stdio.h>
#include<ctype.h>

int main(){
    char str[104];
    printf("Enter a word:");
    scanf("%s",str);

    if (str[0] >= 'a' && str[0] <= 'z')
    {
        str[0] = toupper(str[0]);
    }

    printf("%s\n",str);

    return 0;
}