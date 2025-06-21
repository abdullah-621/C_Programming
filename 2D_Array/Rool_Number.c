#include<stdio.h>
int main(){
    int student;
    printf("Enter the number of columns (student) :");
    scanf("%d",&student);
    int number;
    printf("Enter the number of rows (Number) :");
    scanf("%d",&number);

    int arr[student][number];
    for(int i=0;i<student;i++){
        for(int j=0;j<number;j++){
            printf("Enter Number:");
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<student;i++){
        for(int j=0;j<number;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}