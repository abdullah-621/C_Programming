#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    float sum = 0;
    int Last_Digite = 0;
    
    do
    {
       Last_Digite = n % 10;
       n /= 10;
       sum += pow(Last_Digite , 2);
    } 
    while (n != 0);
    printf("Sum Is : %.0f",sum);
    
    return 0;
}