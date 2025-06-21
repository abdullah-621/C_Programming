#include<stdio.h>
// int change(int x ,int y){
//     int z;
//     x = z;
//     y = x;
//     z = y;
//     return;
//}
int main(){
    int n;
    printf("Enter The value of n:");
    scanf("%d",&n);
    int m;
    printf("Enter The value of m:");
    scanf("%d",&m);
    //int z = change(n,m);
    int z;
    z = m;
    m = n;
    n = z;
    printf("The value of N is :%d\n",n);
    printf("The value of M is :%d",m);
    return 0;
}