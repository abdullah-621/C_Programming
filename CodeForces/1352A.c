#include<stdio.h>

int main(){
    int t,n,pow10,last_digit;
    scanf("%d",&t);

    while (t--)
    {
        scanf("%d",&n);
        int round_number[5] = {0};   // Array to store round numbers
        int count = 0;
        pow10 = 1; 

        while (n > 0)
        {
            last_digit = n % 10;
            if (last_digit != 0)
            {
               round_number[count++] = pow10 * last_digit;
            }
            n /= 10;
            pow10 *= 10;   // Move to the next place value
        }
        printf("%d\n",count);
        for (int i = 0; i < count; i++)
        {
            printf("%d ",round_number[i]);
        }
        printf("\n");
    }
     
    return 0;
}