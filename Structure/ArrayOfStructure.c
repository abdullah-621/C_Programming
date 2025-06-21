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

    pokemon arr[3];

    // arr[0].attack = 180;
    // arr[0].hp = 80;
    // arr[0].tier = 90;
    // strcpy(arr[0].name,"Charizard");

    // arr[1].attack = 140;
    // arr[1].hp = 70;
    // arr[1].tier = 50;
    // strcpy(arr[1].name,"Mewtwo");

    // arr[2].attack = 90;
    // arr[2].hp = 80;
    // arr[2].tier = 50;
    // strcpy(arr[2].name,"Pikachu");

    for(int i=0;i<3;i++){
        printf("Enter %d no pokemon details(Name:attack:hp:tier):\n",i);
        scanf("%s",&arr[i].name); 
        scanf("%d",&arr[i].attack);
        scanf("%d",&arr[i].tier);
        scanf("%d",&arr[i].hp);
    }

    for(int i=0;i<3;i++){
        printf("Name :%s\n",arr[i].name);
        printf("Attack :%d\n",arr[i].attack);
        printf("tier :%d\n",arr[i].tier);
        printf("Tier :%d\n\n",arr[i].hp);
    }
    
    return 0;
}