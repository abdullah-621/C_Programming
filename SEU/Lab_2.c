#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of test case:");
    scanf("%d",&n);
    char s[100];
    printf("Enter your Input:");
    //fgets(s,100,stdin);
    scanf("%[^\n]s",s);
    puts(s);
    return 0;
}