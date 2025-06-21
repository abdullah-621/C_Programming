#include<stdio.h>
void draw_snack(int row, int columns){
    for (int i = 0; i < row; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < columns; j++)
            {
                printf("#");
            }
        }
        else
        {
            if (i % 4 == 1)
            {
                for (int k = 0; k < columns - 1; k++)
                {
                    printf(".");
                }
                printf("#");
            }
            else
            {
                printf("#");
                for (int l = 0; l < columns - 1; l++)
                {
                    printf(".");
                } 
            }  
        }  
        printf("\n");
    } 
}
int main(){

    int n,m;
    scanf("%d%d",&n,&m);

    draw_snack(n,m);

    return 0;
}

