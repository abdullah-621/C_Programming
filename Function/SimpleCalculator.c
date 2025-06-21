#include<stdio.h>
float add(float a, float b){
    return a + b;
}
float subtract(float a, float b){
    return a - b;
}
float multiply(float a, float b){
    return a * b;
}
float divide(float a, float b){
    return a / b;
}
int main(){
    printf("\n\nSimple Calculator\n");
    printf("------------------\n");
    float x;
    printf("\nEnter The value of x:");
    scanf("%f",&x);
    float y;
    printf("Enter The value of y:");
    scanf("%f",&y);
    
    float add_result =  add(x, y);
    float subtract_result = subtract(x, y);
    float multiply_result = multiply(x, y);
    float divide_result = divide(x, y);
    
    
    printf("\n\nThe sum is:%f\n\n",add_result);
    printf("The subtraction is:%f\n\n",subtract_result);
    printf("The product is:%f\n\n",multiply_result);
    printf("The quotient is:%f\n\n",divide_result);
    return 0;
}