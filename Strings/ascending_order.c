#include<stdio.h>
#include<string.h>

int main(){
    char str[100], str2[100];
    printf("Enter the string:");
    scanf("%[^\n]s",str);

   char ch[100] = "This is test string";
   for (int i = 8; i < 9+4; i++)
   {
    printf("%c",ch[i]);
   }
   
   
   
    return 0;
}



