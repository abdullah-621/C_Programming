#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);

    while (t--)
    {
        int rating;
        scanf("%d",&rating);

        if (rating >= -5000 && rating <= 1399)
        {
            printf("Division 4\n");
        }
        else if (rating >= 1400 && rating <= 1599)
        {
            printf("Division 3\n");
        }
        else if (rating >= 1600 && rating <= 1899)
        {
            printf("Division 2\n");
        }
        else if (rating >= 1900 && rating <= 5000)
        {
            printf("Division 1\n");
        }  
    }
    
    return 0;
}