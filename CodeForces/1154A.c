#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
int main(){
    int x1,x2,x3,x4;
    scanf("%d%d%d%d",&x1,&x2,&x3,&x4);

    int random[4] = {x1,x2,x3,x4};

    for (int i = 0; i < 3; i++)
    {
        int min_elements = INT_MAX;
        int min_idx = -1;

        for (int j = i; j < 4; j++)
        {
            if (min_elements > random[j])
            {
                min_elements = random[j];
                min_idx = j;
            } 
        }
        int temp = random[min_idx];
        random[min_idx] = random[i];
        random[i] = temp;
    }

    printf("%d %d %d\n",random[3] - random[0],random[3] - random[1],random[3] - random[2]);

    return 0;
}