#include<stdio.h>
int square(int x)
{
    return (x*x);
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int z = square(n);
    printf("%d's square = %d ",n,z);
    return 0;
}