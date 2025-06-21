#include<stdio.h>
typedef struct Student
    {
        char name[20];
        int age;
        float total_mark;
    }Bro;

int main(){
    int n;
    printf("Number Of students:");
    scanf("%d",&n);

    Bro arr[20];
    float avagrge_marks = 0;

    for (int i = 1; i <= n; i++)
    {
        printf("Enter %d No Student Details:\n",i);
        scanf("%s",&arr[i].name);
        scanf("%d",&arr[i].age);
        scanf("%f",&arr[i].total_mark);
        avagrge_marks += arr[i].total_mark;
    }
    for (int i = 1; i <= n; i++)
    {
        printf("%s's Details:\n",arr[i].name);
        printf("-------------\n");
        printf("Name :%s\n",arr[i].name);
        printf("Age :%d\n",arr[i].age);
        printf("Mark :%f\n\n",arr[i].total_mark);
       
    }
    printf("The avagage is:%f",avagrge_marks / n);
    return 0;
}