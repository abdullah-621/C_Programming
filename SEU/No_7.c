#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);

    int real[n],copy[n];

    printf("Elements of the Real array:\n");
    for (int i = 0; i < n; i++){
        scanf("%d",&real[i]);
        copy[i] = real[i];
    }

    // for (int i = 0; i < n; i++){
    //     copy[i] = real[i];      // copy elements
    // }
    
    printf("Elements of the copy array:\n");
    for (int i = 0; i < n; i++){
        printf("%d ",copy[i]);
    }
    
    return 0;
}