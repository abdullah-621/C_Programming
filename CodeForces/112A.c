#include<stdio.h>
#include<string.h>

void compair(char str3[],char str4[]);

int main(){
    char str1[100];
    char str2[100];
    //scanf("%[^\n]",str1);
    // getchar();
    // scanf("%[^\n]",str2);
    // getchar();
    fgets(str1, 100, stdin);
    getchar();
    fgets(str2, 100, stdin);
    getchar();

    compair(str1,str2);
    return 0;
}

void compair(char str3[],char str4[]){

    int compair5 = strcmp(str3,str4);
    
    if (compair5 > 0){
        printf("1\n");
    }
    else if (compair5 < 0){
        printf("-1\n");
    }
    else{
        printf("0\n");
    }
    
    return;
}
