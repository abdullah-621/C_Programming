#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    char newstr[100];
    int j = 0;

    scanf("%[^\n]",str);
    

    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] != '+'){
           newstr[j++] = str[i];
        //    if (str[i+1] != '\0' && str[i+1] != '+') {
        //         newstr[j++] = '+';
        //     }
        }   
    }
    newstr[j++] = '\0';

    printf("%s\n",newstr);
    return 0;
}
