#include <stdio.h>
#include <string.h>

int main() {
    char str[205];
    
    fgets(str, 205, stdin);

    int special = 0;
    int number = 0;
    int alphabate = 0;

    
    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] >= '0' && str[i] <= '9' ) {
           number ++;
        }       
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            alphabate ++;
        }
        else
        {
            special ++;
        }
        
    }
     printf("Number of Alphabets in the string is : %d\nNumber of Digits in the string is :%d\nNumber of Special characters in the string is :%d",alphabate,number,special);
    
    
    return 0;
}