#include<stdio.h>
#include<stdbool.h>
#include<string.h>
int main(){
    typedef struct date
    {
        int day;
        int month;
        int year;
    }date;
    
    date a,b;
    a.day = 03;
    a.month = 8;
    a.year = 2003;
    
    b.day = 03;
    b.month = 8;
    b.year = 2003;

    // if(a.day == b.day && a.month == b.month && a.year == b.year) printf("The dates are eqeal");
    // else printf("The dates are not eqeal");

    bool flag = true;
    if(a.day != b.day) flag = false;
    if(a.month != b.month) flag = false;
    if(a.year != b.year) flag = false;

    if(flag == true) printf("The dates are equal");
    else printf("The dates are not equal");
    
    return 0;
}