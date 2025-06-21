#include<stdio.h>
int main(){
    char str[] = "Abdullah Al Masum";
    //str[1] = 'B';
   //str[6] = 87;
   int i = 0;
   while (str[i] != '\0')
   {
    printf("%c",str[i]);
    i++;
   }
//    printf("%s",str);
 
    return 0;
}