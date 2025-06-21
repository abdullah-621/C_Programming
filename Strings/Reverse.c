#include<stdio.h>
int main(){

    char str[40];
    puts("Enter a string :");
    //scanf("%[^\n]s",str);
    gets(str);  //like scanf

    int size = 0;
    int k = 0;
    while (str[k] != '\0'){
        size++;      // For str Size
        k++;
    }
    for (int i = 0,j = size-1; i < j; i++,j--)
    {
        char temp = str[i];     //reverse code
        str[i] = str[j];
        str[j]  = temp;
    }

    puts("The Reverse str is :");
    puts(str);
    
        
    return 0;
}