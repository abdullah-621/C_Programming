#include<stdio.h>
#include<string.h>
int main(){
    char first[10] = "NOMAN";
    char second[] = "NOMAN";
    first[3] = 'N';
    puts(first);
    int compair = strcmp(first,second);
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