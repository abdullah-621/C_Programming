#include <stdio.h>
#include <string.h>

int compair(char *x,char *y){
    int pair = strcmp(x,y);
    return pair;
}
int main() {
    char a[205], b[205] ;
    scanf("%s", a);
    scanf("%s",b);
    
    int com = compair(a,b);
    if (com == 0)
    {
        printf("%s & %s are equal.",a,b);
    }
    else
    {
        printf("%s & %s are not equal.",a,b);
    }
    

    return 0;
}