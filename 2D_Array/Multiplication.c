#include<stdio.h>
int main(){
    int m;
    printf("Enter no of Rows of the 1st matrix:");
    scanf("%d",&m);
    int n;
    printf("Enter no of Columns of the 1st matrix:");
    scanf("%d",&n);
    int arr[m][n];
    printf("\nEnter elements of 1st Matrix:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int p;
    printf("Enter no of Rows of the 2nd matrix:");
    scanf("%d",&p);
    int q;
    printf("Enter no of Columns of the 2nd matrix:");
    scanf("%d",&q);
     int brr[p][q];
    printf("\nEnter elements of 2nd Matrix:\n");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d",&brr[i][j]);
        }
    }
    if(n==p){
        int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                res[i][j] = 0;
                for(int k=0;k<p;k++){
                    res[i][j] += arr[i][k] * brr[k][j];
                }
            }
        }
        printf("\nMultiplied Matriex is:\n");
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
              printf("%d ",res[i][j]);
            }
            printf("\n");
        }
    }
    else{
         printf("The Matrices cannot be multiplied.");
    }
    return 0;
}