#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of Array:");
    scanf("%d",&n);

    int arr[n];
    printf("Enter Elemnent:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int pos = 0, neg = 0;
    int positive[pos],Negative[neg];
    //int positive[n],Negative[n];
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            
            Negative[neg++] = arr[i];
        }
        else{
            positive[pos++] = arr[i];
        }        
    }
   
    
    printf("Posetive Number :%d\nNegative Number:%d\n",pos,neg);

    printf("Posetive Element:\n");
    for (int i = 0; i < pos; i++)
    {
        printf("%d ",positive[i]);
    }

    printf("\nNegative Element:\n");
    for (int i = 0; i < neg; i++)
    {
        printf("%d ",Negative[i]);
    }
    
    return 0;
}