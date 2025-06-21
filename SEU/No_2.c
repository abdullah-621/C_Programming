#include <stdio.h>
#include<math.h>
int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("Cubes of numbers from 1 to %d:\n", n);
    for (int i = 1; i <= n; i++) {
        float cube = pow(i,3);
        printf("%d^3 = %.0f\n", i, cube);
    }

    return 0;
}
