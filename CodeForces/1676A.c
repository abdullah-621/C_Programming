#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    while (t--)
    {
        char number[7];
        scanf("%s",number);

        int first_3 = number[0] + number [1] + number[2];
        int last_3 = number[3] + number [5] + number[4];

        if (first_3 == last_3)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
