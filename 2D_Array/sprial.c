#include<stdio.h>
int main(){
    int m;
    printf("\nEnter no of Rows of the matrix:");
    scanf("%d",&m);
    int n;
    printf("Enter no of Columns of the matrix:");
    scanf("%d",&n);
    int arr[m][n];
    printf("\nEnter elements of the Matrix:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nSpiral Result Is:\n");
    
    int minR = 0;
    int maxR = m-1;
    int minC = 0;
    int maxC = n-1;
    int TNE = m*n;
    int count = 0;

    while (count < TNE){
        for(int j=minC;j<=maxC && count<TNE;j++){    // print Min Row
            printf("%d ",arr[minR][j]); 
            count++;
        }
        minR++;

        for(int i=minR;i<=maxR && count<TNE;i++){    // print Max Columns
            printf("%d ",arr[i][maxC]); 
            count++; 
        }
        maxC--;

        for(int j=maxC;j>=minC && count<TNE;j--){     // print Max Row (Reverse)
            printf("%d ",arr[maxR][j]); 
            count++;
        }
        maxR--;

        for(int i=maxR;i>=minR && count<TNE;i--){     // print Min columns (Reverse)
            printf("%d ",arr[i][minC]);
            count++;
        }
        minC++;
    }

    return 0;
}