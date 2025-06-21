#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);

    int steps = x, s = 0;
    for (int i = 1; i <= 5 ; i++)
    {
        s = x / i;
        if (s < steps)
        {    
            if (x % i != 0)
            {
                s = s + 1;
            }  
            steps = s;  
        }    
    }
    printf("%d",steps);
    return 0;
}

// #include <stdio.h>

// int main() {
//     int x;
//     scanf("%d", &x);

//     // Calculate the minimum number of steps
//     int steps = (x + 4) / 5;  // This effectively rounds up the division

//     printf("%d\n", steps);
//     return 0;
// }
