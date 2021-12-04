#include <stdio.h>
#define MAX_SIZE 100

void printMatrix(int A[][MAX_SIZE],int, int);
void addMatrix(int A[][MAX_SIZE],int B[][MAX_SIZE],int C[][MAX_SIZE],int,int);
void multiplyMatrix(int A[][MAX_SIZE],int B[][MAX_SIZE],int C[][MAX_SIZE],int,int,int);

int main()
{
    
    int A1[MAX_SIZE][MAX_SIZE]={
        {1,2,3},
        {4,5,6},
        {7,8,9},
        {10,11,12}
    };
    
    int A2[MAX_SIZE][MAX_SIZE]={
        {1,2,3},
        {4,5,6},
        {7,8,9},
        {10,11,12}
    };
    int A3[MAX_SIZE][MAX_SIZE];
    
    int A4[MAX_SIZE][MAX_SIZE]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    
    int A5[MAX_SIZE][MAX_SIZE];

        
    //矩陣顯示    
    printMatrix(A1,3,3);
    printf("\n");
    
    //矩陣相加
    addMatrix(A1,A2,A3,4,3);
    printMatrix(A3,3,3);
    printf("\n");
    
    //矩陣相乘
    multiplyMatrix(A1,A4,A5,4,3,4);
    printMatrix(A5,4,4);
    printf("\n");
    
    
    


    return 0;
}

//將a矩陣(有mxn個元素),所有元素輸出到螢幕
void printMatrix(int A[][MAX_SIZE],int m, int n)
{
   int i,j;

   for(i=0 ;i < m ;i++)
   {
    	for(j=0;j < n;j++)
            printf("%4d",A[i][j]);
        printf("\n");
   }
}

//矩陣A + 矩陣B 的結果放入矩陣C
void addMatrix(int A[][MAX_SIZE],int B[][MAX_SIZE],int C[][MAX_SIZE],int m,int n){
    
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    
}

//AxB  (A為mXn矩陣  B為nXt矩陣)
void multiplyMatrix (int A[][MAX_SIZE],int B[][MAX_SIZE],int C[][MAX_SIZE],int m,int n,int t){
    
    int i,j,k;
    for(i=0;i<m;i++){
        for(j=0;j<t;j++){
            C[i][j]=0;
            for(k=0;k<n;k++){
                C[i][j]=C[i][j]+A[i][k]*B[k][j];
            }
        }
    }
    
}
