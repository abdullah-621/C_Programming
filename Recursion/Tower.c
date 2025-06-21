#include<stdio.h>
void Tower(int n, char soruce, char helper, char destination){
    if (n==0) return;
    Tower(n-1, soruce, destination, helper);
    printf("%c -> %c\n",soruce, destination);
    Tower(n-1, helper, soruce, destination);
    return;
}
int main(){
    int n;
    printf("Enter the number of n :");
    scanf("%d",&n);
    Tower(n, 'A', 'B', 'C');
    return 0;
}