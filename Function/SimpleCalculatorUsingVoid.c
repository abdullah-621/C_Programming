#include<stdio.h>
void add(float a, float b){
    float z = a + b;
    printf("The sum is:%f\n",z);
}
void subtract(float a, float b){
    float z = a - b;
    printf("The subtraction is:%f\n",z);
}
void multiply(float a, float b){
    float z = a * b;
    printf("The product is:%f\n",z);
}
void divide(float a, float b){
    float z = a / b;
    printf("The quotient is:%f\n",z);
}
int main(){
    float x;
    printf("Enter The value of x:");
    scanf("%f",&x);
    float y;
    printf("Enter The value of y:");
    scanf("%f",&y);

    add(x, y);
    subtract(x, y);
    multiply(x, y);
    divide(x, y);
    return 0;
}
