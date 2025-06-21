#include<stdio.h>
#include<string.h>
int main(){

    int n;
    printf("Entre no of test Case:");
    scanf("%d",&n);

    int x = 0;
    char str[4];

    for(int i=0;i<n;i++){
        printf("Enter %d no elements:",i+1);
        scanf("%s",str);

        if (strcmp(str, "X++") == 0 || strcmp(str, "++X") == 0){
            x++;
        }
        else if (strcmp(str,"--X") == 0 || strcmp(str, "X--") == 0){
            x--;
        }
    }
    printf("%d\n",x);
    return 0;
}