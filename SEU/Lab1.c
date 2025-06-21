#include<stdio.h>
int main(){
    int t;
    printf("Enter the number of test case:");
    scanf("%d",&t);

    for (int i = 0; i < t; i++){
        int n;
        printf("Enter the number of elements in the array:");
        scanf("%d",&n);

        int a[n];
        for (int j = 0; j < n; j++){
            scanf("%d",&a[j]);
        }

        int found = 0;
        for (int k = 0; k < n-2; k++){
            if (a[k] + a[k+1] <= a[k+2]){
                printf("%d %d %d\n",k+1,k+2,k+3);
                found = 1;
                break;
            }  
        }
        if (!found){
           printf("-1\n");
        }
    }
    
    return 0;
}