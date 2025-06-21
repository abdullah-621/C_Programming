#include<stdio.h>
int count(char count[]);
int main(){
    char first[100];
    printf("Enter your name:");
    scanf("%[^\n]",first);
    //printf("My name is %s",first);
    //fgets(first, 100, stdin);
    puts(first);
    // int count = 0;
    // for(int i=0;first[i] != '\0';i++){
    //     count ++;
    // }
    printf("Size is:%d",count(first));
    // printf("Size is:%d",count(first));

    return 0;
}
int count(char count[]){
    int count1 = 0;
    for(int i=0;count[i] != '\0';i++){
        if (count[i] == 'a'){
            count1 ++;
        }
    }
    return count1;
}
