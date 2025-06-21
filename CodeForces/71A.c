#include<stdio.h>
#include<string.h>
int main(){

    int n;
    scanf("%d",&n);

    getchar();   // Clear the input buffer after reading the integer

    for(int i=0;i<n;i++){

        char str[100];
        printf("Enter the string:");
        scanf("%[^\n]",str);
        getchar();    // Clear the input buffer after reading the integer
        
        int length = strlen(str);

        if (length > 10){
            printf("%c%d%c\n",str[0],length-2,str[length-1]);
        }
        else{
            printf("%s\n", str);
            //puts(str);
        }   
    }
    return 0;
}