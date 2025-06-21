#include<stdio.h>
typedef struct time
    {
        int hour;
        int munite;
        int second;
    }time;

int main(){
    int n;
    printf("Number Of time's:");
    scanf("%d",&n);

    time arr[20];
    int H = 0,M = 0,S = 0;
    for (int i = 1; i <= n; i++)
    {
        printf("Enter Time's %d:\n",i);

        printf("Enter Hour :"); 
        scanf("%d",&arr[i].hour);
        H += arr[i].hour;

        printf("Enter Munite :");
        scanf("%d",&arr[i].munite);
        M += arr[i].munite;

        printf("Enter Second :");
        scanf("%d",&arr[i].second);
        S += arr[i].second;

        printf("\n");
    }
    for (int i = 1; i <= n; i++)
    {
        printf("time's %d Details:\n",i);
        printf("-------------\n");
        printf("Hour :%d\n",arr[i].hour);
        printf("Munite :%d\n",arr[i].munite);
        printf("Second :%d\n\n",arr[i].second);
       
    }
    if (S >= 60)
    {
        M += 1;
        S = 00;
    }
    else if (M >= 60)
    {
        H += 1;
        M = 00;
    }
    
    printf("Time After Adding:%d / %d / %d\n",H,M,S);
    return 0;
}