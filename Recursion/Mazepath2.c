#include<stdio.h>
int maze2(int n, int m){
    int Rightways = 0;
    int Downways = 0;
    if(n==1 && m==1) return 1;
    if(n==1){
        Rightways += maze2(n,m-1);
    }
    if(m==1){
        Downways += maze2(n-1,m);
    }
    if(n>1 && m>1){
        Rightways += maze2(n,m-1);
        Downways += maze2(n-1,m);
    }
    int totalways = Rightways + Downways;
    return totalways;
}

int main(){
    int n;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    int m;
    printf("Enter the number of columns : ");
    scanf("%d",&m);
    int noOfways = maze2(n,m); 
    printf("The number of ways is : %d",noOfways);
    return 0;
}