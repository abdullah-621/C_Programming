#include<stdio.h>
#include<string.h>
int main(){
    char ch[100];
    printf("Enter the string:");
    scanf("%[^\n]",ch);
    
    int lenght = strlen(ch);
    
    for (int i = 0, j = lenght-1; i < j; i++,j--){
        char temp = ch[i];
        ch[i] = ch[j];
        ch[j] = temp;
    }
    printf("Reverse String Is :%s",ch);
    
    return 0;
}