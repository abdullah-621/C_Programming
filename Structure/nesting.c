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

    typedef struct legendarypokemon
    {
        pokemon normal;
        char ability[50];
    }legendarypokemon;

    typedef struct superpokemon
    {
        legendarypokemon legend;
        int specialattack;
    }superpokemon;

   superpokemon arceus;
   arceus.specialattack = 300;
   strcpy(arceus.legend.ability,"Turn Anyone to stone");
   arceus.legend.normal.hp = 250;
    
    
    return 0;
}