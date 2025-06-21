#include<stdio.h>
int main(){
    int n;
    printf("Enter Elements:");
    scanf("%d",&n);
    
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += (2 * i - 1);
        printf("%d ",(2 * i - 1));
    }
    printf("\nSum Is :%d",sum);
    return 0;
}