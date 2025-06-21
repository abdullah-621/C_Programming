#include<stdio.h>
#include<string.h>
int main(){
    typedef struct Books
    {
        char name[50];
        int NoOfpage;
        float price;
       
    }Books;

    Books a;
    Books b;

    a.price = 100;
    a.NoOfpage = 200;
    strcpy(a.name,"Secret Seven");

    b.price = 3005.6;
    b.NoOfpage = 400;
    strcpy(b.name,"Five Twenty");

    printf("%d\n",a.NoOfpage);
    printf("%f\n",a.price);
    printf("%s\n",a.name);
    
    return 0;
}