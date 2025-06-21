#include<stdio.h>
    void print_divisiors(int a){
        for(int i = 1; i <= 100; i++){
            if(a % i == 0){
                printf(" %d ", i);
            }
        }
    }
    int main(){
    int x;
    printf("Enter The value of x:");
    scanf("%d",&x);
    print_divisiors(50);
    
    return 0;
}