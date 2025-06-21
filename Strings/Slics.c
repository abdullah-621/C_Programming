#include<stdio.h>
#include<string.h>
void slics(char str1[],int m, int n){
    char newstr[100];
    int j = 0;
    for (int i = m; i <= n; i++, j++){
        newstr[j] = str1[i];
    }
    newstr[j] = '\0';
    puts(newstr);
    
}
int main(){

    int m,n;
    printf("Enter slics point :");
    scanf("%d%d",&m,&n);

    char pass[100];
    printf("Enter str :");
    scanf("%s",pass);

    slics(pass,m,n);
    return 0;
}
