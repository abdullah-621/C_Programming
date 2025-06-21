// #include<stdio.h>
// #include<limits.h>
// int main(){
//     int anInteger;
//     float aFloat;
//     char aCharecter;
//     double aDouble;

//     printf("Size Of Integer %d byts\n",sizeof(anInteger));
//     printf("Size Of Float %d byts\n",sizeof(aFloat));
//    printf("Size Of Charecter %d byts\n",sizeof(aCharecter));
//     printf("Size Of Double %d byts\n",sizeof(aDouble));

//     printf("\n");

//     printf("Max value of int : %d\n",INT_MAX);
//     printf("Max value +1 of int : %d\n",INT_MAX + 1);
//     printf("Min value of int : %d\n",INT_MIN);
//     printf("Min value -1 of int : %d\n",INT_MIN - 1);

//     return 0;
// }

// #include<stdio.h>
// #include<limits.h>
// int main(){
//     int anInteger;
//     unsigned aUnsingrdInteger;
//     short int aShortInterger;
//     unsigned short int aUnsingedShortInterger;

//     long int aLongInterger;
//     unsigned long int aUnsignedLongInterger;
//     long long int aLongLongInterger;
//     unsigned long long aUnsignedLongLongInterger;

//     printf("Size Of Integer %llu bytes\n",sizeof(anInteger));
//     printf("Size Of UnsingrdInteger %llu bytes\n",sizeof(aUnsingrdInteger));
//     printf("Size Of ShortInterger %llu bytes\n",sizeof(aShortInterger));
//     printf("Size Of UnsingedShortInterger %llu bytes\n\n\n",sizeof(aUnsingedShortInterger));

//     printf("Size Of LongInterger %llu bytes\n",sizeof(aLongInterger));
//     printf("Size Of UnsignedLongInterger %llu bytes\n",sizeof(aUnsignedLongInterger));
//     printf("Size Of LongLongInterger %llu bytes\n",sizeof(aLongLongInterger));
//     printf("Size Of UnsignedLongLongInterger %llu bytes\n",sizeof(aUnsignedLongLongInterger));

    

//     return 0;
// }

// #include<stdio.h>
// #include<limits.h>
// int main(){
//     int gInt;
//     float gFloat;
//     scanf("%f",&gFloat);

//     gInt = (int) gFloat;

//     printf("The given floating Number is: %f\n",gFloat);
//     printf("The given floating Number is (More accuractylt): %.2f\n",gFloat);
//     printf("The Integer representation will be: %d\n",gInt);
//     return 0;
// }

// #include<stdio.h>
// #include<limits.h>
// int main(){
//     int a;
//     a = 5;
//     printf("The value of a is:%d\n",a);
//     getchar();

//     a += 3;
//     printf("The value of a is:%d\n",a);
//     getchar();

//     a -= 2;
//     printf("The value of a is:%d\n",a);
//     getchar();

//     a *= 9;
//     printf("The value of a is:%d\n",a);
//     getchar();

//     a /= 6;
//     printf("The value of a is:%d\n",a);
//     getchar();

//     a %= 4;
//     printf("The value of a is:%d\n",a);
   
//     return 0;
// }

// #include<stdio.h>
// int main(){
    // int val = 0;

    // printf("The value of val is: %d\n",val);
    // printf("The value of val is: %d\n",val++);
    // printf("The value of val is: %d\n",val);
    // printf("The value of val is: %d\n",++val);
    // printf("The value of val is: %d\n",val);
    // printf("The value of val is: %d\n",val--);
    // printf("The value of val is: %d\n",val);
    // printf("The value of val is: %d\n",--val);
    // printf("The value of val is: %d\n",val);

//         return 0;
// }
   
// #include<stdio.h>
// int main(){
//    int num1,num2;
//    num1 = 6;
//    num2 = 8;

//    printf("Bitwise AND Operation :%d\n",num1&num2);
//    printf("Bitwise OR Operation :%d\n",num1|num2);
//    printf("Bitwise X-OR Operation :%d\n",num1^num2);
//    printf("Bitwise NOT Operation :%d %d\n",~num1, ~num2);
//    printf("Bitwise Right Shift (by 1) Operation :%d %d\n",num1 >> 1,num2 >> 1);
//    printf("Bitwise Left Shift (by 1) Operation :%d %d\n",num1 << 1,num2 << 1);
//     return 0;
// }

//  #include<stdio.h>
// int main(){
//    int pos,neg;
//    pos = 1;
//    neg = 0;

//    // Logical AND Operation
//    printf("%d ^ %d : %d \n",neg,neg,neg && neg);
//    printf("%d ^ %d : %d \n",neg,pos,neg && pos);
//    printf("%d ^ %d : %d \n",pos,neg,pos && neg);
//    printf("%d ^ %d : %d \n",pos,pos,pos && pos);

//    // Logical OR Operation
//    printf("%d || %d : %d \n",pos,neg,neg || neg);
//    printf("%d || %d : %d \n",neg,pos,neg || pos);
//    printf("%d || %d : %d \n",pos,neg,pos || neg);
//    printf("%d || %d : %d \n",pos,neg,pos || pos);

//    // Logical XOR Operation
//    printf("%d ^ %d : %d \n",neg,neg,neg ^ neg);
//    printf("%d ^ %d : %d \n",neg,pos,neg ^ pos);
//    printf("%d ^ %d : %d \n",pos,neg,pos ^ neg);
//    printf("%d ^ %d : %d \n",pos,pos,pos ^ pos);

//     return 0;
// }

// #include<stdio.h>
// int main(){
//    int num1,num2;
//    num1 = 3;
//    num2 = 5;

//    printf("%d = %d :%d\n",num1,num2,num1 == num2);
//    printf("%d != %d :%d\n",num1,num2,num1 != num2);
//    printf("%d > %d :%d\n",num1,num2,num1 > num2);
//    printf("%d < %d :%d\n",num1,num2,num1 < num2);
//    printf("%d >= %d :%d\n",num1,num2,num1 >= num2);
//    printf("%d <= %d :%d\n",num1,num2,num1 <= num2);
//     return 0;
// }
