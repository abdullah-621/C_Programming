// #include<stdio.h>
// int main(){
//     int i = 1,x,y;
//     char ch;
//     do
//     {
//         printf("Enter 2 Integer:\n");
//         scanf("%d%d",&x,&y);
//         printf("%d x %d = %d\n",x,y,x*y);

//         ch = getchar();
//         if (ch == 'n')
//         {
//             break;
//         } 
        
//     } while (++i <= 5);
     
//     return 0;
// }

#include<stdio.h>
int main(){
    int arr[5] = {0,0,0,0,0};

    for (int i = 0; i < 5; i++)
    {
        if (i % 2 )
            //continue;
        {
           printf("Enter an Integer:");
           scanf("%d",&arr[i]);
        }    
    }
    for (int i = 0; i < 5; i++)
    {
      printf("%d ",arr[i]);
    }
     
    return 0;
}