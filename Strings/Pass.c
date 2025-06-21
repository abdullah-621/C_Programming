#include<stdio.h>
#include<string.h>

void copy(char ch1[],char ch2[]){
    strcat(ch1,ch2);
    printf("%s",ch1);
}

int main(){
    char str1[] = "Abdullah Al Masum ";
    char str2[] = "Abdullah Al Noman";

    copy(str1,str2);
    return 0;
}