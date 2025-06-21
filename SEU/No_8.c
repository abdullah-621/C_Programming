#include<stdio.h>
int main(){

    int n,searchElement;

    printf("Enter the number of elements:");
    scanf("%d",&n);
    
    int arr[n];
    printf("Elements of the array:\n");
    for (int i = 0; i < n; i++){
        scanf("%d",&arr[i]); 
    }

    printf("Enter the serching element : ");
    scanf("%d", &searchElement);
    
    int found = 1,index = 0;
    for (int i = 0; i < n; i++){
        if(arr[i] == searchElement){
            found = 0;
            index = i;
            break;
        }
    }
    if (found == 0) {
        printf("Element %d exists in the array & index is : %d\n", searchElement,index);
    } 
    else {
        printf("Element %d does not exist in the array.\n", searchElement);
    }
    
    return 0;
}