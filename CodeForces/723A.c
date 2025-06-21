#include<stdio.h>
int main(){
    int x1,x2,x3;
    scanf("%d%d%d",&x1,&x2,&x3);

    int friends_live[3] = {x1,x2,x3};

    for (int i = 0; i < 2; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (friends_live[i] > friends_live[j])
            {
                int temp = friends_live[i];
                friends_live[i] = friends_live[j];
                friends_live[j] = temp;
            }
        }  
    }
    int distance = (friends_live[1] - friends_live[0]) + (friends_live[2] - friends_live[1]);

    printf("%d\n",distance);

    return 0;
}

