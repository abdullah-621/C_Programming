#include <stdio.h>
#include<string.h>

typedef struct pokemon
    {
        int hp;
        int attack;
        int teir;
        char name[15];
    }pokemon;
    
void fun(pokemon x){
    printf("%d",x.attack);
    return;

}

int main() {
    pokemon a;
    a.attack = 150;
    a.hp = 80;
    a.teir = 90;
    strcpy(a.name,"constant");
    fun(a);
    //printf("%d",a.attack);
    
    return 0;
}