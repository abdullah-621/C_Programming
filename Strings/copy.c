#include<stdio.h>
#include<string.h>

void My_strcpy(char str[],char str1[]){
    strcpy(str1,str);
    printf("%s",str1);
}

int main(){
    char str[40],str1[40];
    
    scanf("%[^\n]",str);

    My_strcpy(str,str1);
    
    return 0;
}

