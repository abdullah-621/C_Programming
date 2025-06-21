#include<stdio.h>
#include<string.h>
int main(){
   
    char str1[] = "Abdullah AL Masum";
    printf("%s\n",str1);
    for(int i = strlen(str1); i >= 2; i--){
        str1[i+1] = str1[i];
    }
    str1[1] = 'A';
    printf("%s\n",str1);
    
    return 0;
}
