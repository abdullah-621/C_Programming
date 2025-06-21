#include<stdio.h>
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    int sumEven = 0;
    int sumOdd = 0;
    
    for(int i = 0; i <= 9; i++){
        if(i%2==0){
            sumEven = sumEven + arr[i];
        }
        else{
            sumOdd = sumOdd + arr[i];
        }
    }
    int Different = sumOdd - sumEven;
    printf("The different is : %d",Different);
    return 0;
}