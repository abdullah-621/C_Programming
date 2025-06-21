#include<stdio.h>
#include<string.h>
int main(){
    // char s1[] = "Abdullah Al Masum";
    // char* s2 = s1;  // shawo copy
    // s1[0] = 'B';
    // s1[16] = 'M';
    // printf("%s",s2);

    // Deep copy
    char str1[] = "Abdullah AL Masum";
    char str2[] = "Abdullah AL Noman";
    // int size = 0;
    // int i = 0;
    // while (str1[i] != '\0')
    // {
    //     size++;
    //     i++;
    // }
    
    // char str2[size];
    // for(int j=0;j<size;j++){
    //     str1[i] = str2[j];
    // }
    printf("%s\n",str1);
    printf("%s\n",str2);
    
    return 0;
}
