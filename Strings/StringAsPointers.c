#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "Abdullah Al Masum";
    char* ptr = str;
    int i = 0;
    while (*ptr != '\0')
    {
        printf("%c",*ptr);
        ptr++;
        i++;
    }
    
    return 0;
}
