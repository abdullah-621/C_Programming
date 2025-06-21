#include<stdio.h>
#include<string.h>
int main(){

    typedef struct pokemon
    {
        char name[15];
        int hp;
        int attack;
        char tier;

    }pokemon;

    pokemon a,b,c;

    a.attack = 70;
    a.hp = 80;
    a.tier = 90;
    strcpy(a.name,"Abdullah Al Masum");

    b=a; 
    c=b;    // deep copy

    //strcpy(b.name,"MONam");

    printf("Name:%d",b.hp);
    
    return 0;
}