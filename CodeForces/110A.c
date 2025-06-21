#include<stdio.h>
int main(){

    long long n;
    scanf("%lld",&n);
    
    int last_digite = 0;
    int Is_lucky = 1;

    while (n != 0)
    {
        last_digite = n % 10;
        n = n / 10;
        if (last_digite != 4 && last_digite != 7)
        {
            Is_lucky = 0;
            break;       
        }
    }
    
    if (Is_lucky){
        printf("YES");
    }
    else{
        printf("NO");
    }
    
    return 0;
}

