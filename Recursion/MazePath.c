#include<stdio.h>
int maze(int cr, int cc, int er, int ec){
    int Rightways = 0;
    int Downways = 0;
    if(cr==er && cr==ec) return 1;
    if(cr==er){        // only RightWays call
        Rightways += maze(cr,cc+1,er,ec);
    } 
    if(cc==ec){       // only Downways call
        Downways += maze(cr+1,cc,er,ec);
    }
    if(cr<er && cc<ec){
        Rightways = maze(cr,cc+1,er,ec);
        Downways = maze(cr+1,cc,er,ec);
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
    int noOfways = maze(1,1,n,m); 
    printf("The number of ways is : %d",noOfways);
    return 0;
}