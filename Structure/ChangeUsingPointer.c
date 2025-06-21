#include <stdio.h>
#include<string.h>

typedef struct pokemon
    {
        int hp;
        int attack;
        int tier;
        char name[15];
    }pokemon;
    
void change(pokemon* x){
    //1st type
    // (*x).attack = 180;
    // (*x).hp = 90;         
    // (*x).tier = 'S';
    // strcpy((*x).name,"constant Value");

    // 2nd type
    x->attack = 190;
    x->hp = 100;
    x->tier = 'S';
    strcpy(x->name,"Easy Away");
    return;
}

int main() {
    pokemon a = {150,80,'A',"Constant"};
    printf("%d\n%d\n%c\n%s\n",a.attack,a.hp,a.tier,a.name);
    change(&a);
    printf("%d\n%d\n%c\n%s",a.attack,a.hp,a.tier,a.name);
    
    return 0;
}