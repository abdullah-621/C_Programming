#include <stdio.h>
int main()
{
    struct pokemon
    {
        int hp;
        int attack;
        int speed;
        char tear;
    } pikachu, charizard, mewtwo; // ( struct pokempon pikachu same things )

    // struct pokemon pikachu;
    printf("Enter hp pf pikachu: ");
    scanf("%d", &pikachu.hp);
    printf("%d", pikachu.hp);
    // pikachu.hp = 60;
    pikachu.attack = 80;
    pikachu.speed = 100;
    pikachu.tear = 'A';

    // struct pokemon charizard;
    charizard.hp = 90;
    charizard.attack = 100;
    charizard.speed = 70;
    charizard.tear = 'B';

    // struct pokemon mewtwo;
    mewtwo.hp = 70;
    mewtwo.attack = 180;
    mewtwo.speed = 120;
    mewtwo.tear = 'S';

    return 0;
}