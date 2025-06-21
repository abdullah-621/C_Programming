#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter the string:");
    scanf("%[^\n]s",str);

    int i,j;
    char MaxRepetedChar;
    int count = 0;
    int maxCount = 0;

    for (i = 0; i < strlen(str); i++){
        count = 0;
        for (j = 0; j < strlen(str); j++){
           if (str[i] == str[j]){
                count++;
           }  
        }
        if (maxCount < count){
            maxCount = count;
            MaxRepetedChar = str[i];
        }   
    }
    printf("The Highest frequency of character '%c' appears number of times : %d \n\n",MaxRepetedChar,maxCount);   
    return 0;
}

