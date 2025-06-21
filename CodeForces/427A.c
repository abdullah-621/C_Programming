#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int events[n];
    int counts = 0;
    int sum_hiring = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&events[i]);

            if (events[i] != -1)
            {   
                sum_hiring += events[i];
            }
            else
            {
                if (sum_hiring > 0)
                {
                    sum_hiring--;
                }
                else
                {
                    counts++;
                } 
            } 
        }
    printf("%d\n",counts);
    
    return 0;
}