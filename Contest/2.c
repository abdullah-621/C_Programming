// #include<stdio.h>
// int main(){

//     int n;
//     scanf("%d",&n);

//     int count = 0;

//     for (int i = 1; i <= n; i++)
//     {
//         if (i % 2 == 0)
//         {
//             continue;
//         }
//         else{
//             count++;
//         }        
//     }
//     printf("%d",count);
//     return 0;
// }

#include <stdio.h>

int main(void) {
	
	int T;
	scanf("%d",&T);
	
	int X;

    while (T--)
    {
        scanf("%d",&X);
        if (X < 3)
        {
            printf("LIGHT\n");
        }
        else if (X >= 3 && X < 7)
        {
            printf("MODERATE\n");
        }
        else
        {
            printf("HEAVY\n");
        }    
	    
    }
    
	return 0;
}



