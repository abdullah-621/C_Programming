#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    //scanf("%s",str);  // only the first word will be considered

    //scanf("%[^\n]s",str);  // intear sentence can be input 

    gets(str);  // intear sentence can be input    >>(Gets means scanf)<<

    puts(str);  // >>(puts means printf)<<

    printf("Your Input is :%s\n",str);
    
    return 0;
}

