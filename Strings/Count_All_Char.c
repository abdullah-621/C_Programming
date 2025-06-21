#include<stdio.h>
#include<string.h>

int main(){
    char str[100],c,d;
    printf("Enter the string:");
    scanf("%[^\n]s",str);

    int count = 0;

    for (c = 'a'; c <= 'z'; c++){
        count = 0;
        for (int i = 0; str[i] != '\0'; i++){
            if (c == str[i]){
                count++;
            }   
        }      
        if(count > 0)        
         printf("'%c' appears number of times : %d \n",c,count);
    }
    return 0;
}



