#include<stdio.h>

int main(){
    int t, a, b, c, d;
    scanf("%d",&t);

    while (t--) {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        int count = 0;
        if (a < b) {
            count++;
        }
        if (a < c) {
            count++;
        }
        if (a < d) {
            count++;
        }
        printf("%d\n", count);
    }
    
    return 0;
}
