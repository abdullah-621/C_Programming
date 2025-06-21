#include <stdio.h>
#include<string.h>

typedef struct pokemon
    {
        int hp;
        int attack;
        int teir;
        char name[15];
    }pokemon;

int main() {
    pokemon pikachu;
    pikachu.hp = 90;
    pikachu.attack = 89;
    pikachu.teir = 'A';
    strcpy(pikachu.name,"Abdullah");
    
    pokemon* x = &pikachu;

    printf("%d\n",pikachu.attack);
    (*x).attack = 50;  // changed value using pointer

    printf("%p\n",x);
    printf("%p\n",&pikachu.hp);
    printf("%p\n",&pikachu.attack);
    printf("%p\n",&pikachu.teir);
    printf("%p\n",pikachu.name);

    printf("%d\n",pikachu.attack);
    
    return 0;
}