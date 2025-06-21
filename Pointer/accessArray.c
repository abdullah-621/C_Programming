#include<stdio.h>
int main(){

    int arr[5] = {10,20,30,40,50};

    int *ptr = &arr[0];

    for (int i = 0; i < 5; i++)
    {
        printf("%d ",*ptr);
        *ptr++;
    }
    

    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char s[205];
    scanf("%s", s);

    printf("%s",s);

    return 0;
}


