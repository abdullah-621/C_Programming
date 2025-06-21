#include<stdio.h>
int main(){

    char str[] = "Abdullah Al Masum";

    char *ptr = str;

   while (*ptr != '\0')
   {
        printf("%c",*ptr);
        ptr++;
   }

   printf("\n");

   ptr = str;

   *(ptr + 12) = 'N';
   
   printf("%s",str);
    
    return 0;
}