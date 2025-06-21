#include<stdio.h>

 int gcd(int x,int y){
    int reminder = 0;
    while (y != 0){
        reminder = x % y;
        x = y;
        y = reminder;
    }
    return x; 
}

int main(){
    int a,b,n;
    printf("Entre the number:");
    scanf("%d%d%d",&a,&b,&n);
   
   while (1) {
        n -= gcd(a, n); // Simon's turn
        if (n <= 0) {
            printf("0\n");
            break;
        }
        n -= gcd(b, n); // Antisimon's turn
        if (n <= 0) {
            printf("1\n");
            break;
        }
    }
    
    return 0;
}