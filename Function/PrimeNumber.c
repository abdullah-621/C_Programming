#include<stdio.h>
int prime(int a){
        for(int i=2;i<=a-1; i++){
        if(a%i==0){
            printf("%d is a composite number.\n",a);
            break;
        }
        else{
                printf("%d is a prime number.",a);
                break;
            }
    }
    return 0;
    }
 int main(){
    int x;
    printf("Enter the value:");
    scanf("%d",&x);
    int z = prime(x);
    return 0;
}