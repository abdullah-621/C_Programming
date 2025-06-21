#include<stdio.h>
int main(){
    int n;
    int sum = 0;
    while (1){
        scanf("%d",&n);
        if (n==0)
            break;
        if(n > 0)
            sum += n;
    }
    
    printf("The sum of all the positive integers is:%d",sum);
    
    return 0;
}