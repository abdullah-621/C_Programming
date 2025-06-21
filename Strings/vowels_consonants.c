#include <stdio.h>
#include <string.h>

int main() {
    char str[205];
    
    fgets(str, 205, stdin);

    int vowels = 0 ,consonants = 0;
    //int length = strlen(str);

    
    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ) {
           vowels ++;
        }
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            consonants++;
        } 
        
        
    }
     printf("Number of vowels in the string is :%d\nNumber of consonant in the string is :%d",vowels,consonants);
    
    
    return 0;
}

