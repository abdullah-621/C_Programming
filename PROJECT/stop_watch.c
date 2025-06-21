#include<stdio.h>
#include<unistd.h>    // for sleep funtion
#include<stdlib.h>   // for clear console

#define cycle 60

// void clearConsole(){
//     #ifdef _WIN32
//         system("cls");          // Using function for clear console
//     #else
//         system("clear");
//     #endif   
// }

int main(){

    int hour,munite,second;
    printf("Enter hour, minute and second:");
    scanf("%d%d%d",&hour,&munite,&second);

    int h = 0,m = 0,s = 0;

    while (1)
    {
        //clearConsole();  // call for clear screen 
        system("cls");

        printf("####### STOP WATCH ######\n\n");
        printf("%.2d:%.2d:%.2d\n",h,m,s);
        printf("\n\n#########################\n");

        if (h == hour && m == munite && s == second)
        {
            break;
        }

        s++;
        sleep(1);

        if (s == cycle)
        {
           m++;
           s = 0;
        }
        if (m == cycle)
        {
            h++;
            m = 0;
        }        
    }
    
    return 0;
}

