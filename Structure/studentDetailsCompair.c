#include<stdio.h>
#include<string.h>
typedef struct studentDetails
{
    int rool;
    char name[25];
    char department[20];
    char course[20];
    int year;
}studentDetails;
studentDetails Masum,Noman;

void check(studentDetails x,studentDetails y){
    int equal = strcmp(x.course,y.course);  // strcmp means compair two string
    if(equal == 0){
        printf("Yes,They are same Department.");
    }
    else {
        printf("No,They are not same Department.");
    }
    
    return;
}

int main(){
    Masum.rool = 10;
    Masum.year = 2020;
    strcpy(Masum.department,"CSE");
    strcpy(Masum.name,"Abdullah Al MAsum");
    strcpy(Masum.course,"C Programming");

    Noman.rool = 20;
    Noman.year = 2024;
    strcpy(Noman.department,"EEE");
    strcpy(Noman.name,"Abdullah Al Noman");
    strcpy(Noman.course,"Machine Learning");

    check(Masum,Noman);

    return 0;
}