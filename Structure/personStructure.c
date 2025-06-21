#include<stdio.h>
#include<string.h>
int main(){
    struct person
    {
        char name[50];
        int salary;
        int age;
    };

    struct person Masum;
    Masum.age = 21;
    Masum.salary = 80000;
    strcpy(Masum.name,"Abdullah Al Masum");

    struct person Noman;
    Noman.age = 16;
    Noman.salary = 60000;
    strcpy(Noman.name,"Abdullah Al Noman");

    printf("%s\n",Masum.name);
    printf("%d\n",Noman.age);
        
    return 0;
}