#include<stdio.h>
int main(){
    int arr[3][3] = {{1,0,1},{1,1,1},{0,1,0}};

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int Max_Count = 0;
    int Max_Index = 0;
    for(int i=0;i<3;i++){
        int count = 0;
        for(int j=0;j<3;j++){
            if(arr[i][j]==1) count++;
        }
        if(count > Max_Count){
            Max_Count = count;
            Max_Index = i;
        }
        printf("\n");
    }
    printf("%d times 1's is here.\n",Max_Count);
    printf("%d no rows has the most 1's.",Max_Index);
    return 0;
}