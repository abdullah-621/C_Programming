#include<stdio.h>
#include<string.h>
int main(){
    // Return the lenght of string 
    char cpp[]  = "Abdullah Al Noman";
    int size = strlen(cpp);              // Calculate length of a string
    printf("Size Of cpp Is : %d\n",size);

    // deep copy function
    char c1[20] = "Bangladesh";
    char c2[20];
    strcpy(c2,c1);                // copied one string into another string
    c2[0] = 'M';
    printf("%s\n",c1);
    printf("%s\n",c2);

    // stored s2 into s1
    char s1[] = "Hi!";
    char s2[] = "Abdullah.";
    strcat(s1,s2);               // added one string into another string
    printf("%s\n",s1);

    char first[] = "aBDULLAH AL";
    char second[] = "aOMAN";
    int compair = strcmp(first,second);  // Compair 2 string using first ascii value
    if (compair == 0){
        printf("String are equal");
    }
    else if (compair > 0){
        printf("First string is greater than Second string");
    }
    else{
        printf("Second string is greater than first string");
    }

    
    return 0;
}