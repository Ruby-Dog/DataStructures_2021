#include <stdio.h>

int main()
{
    printMagicSquare(1);
    printMagicSquare(3);
    printMagicSquare(5);
    printMagicSquare(7);
    printMagicSquare(9);

    return 0;
}

void printMagicSquare(int N){ //N階魔方陣
    if(N%2==0||N==0){
        printf("請輸入正奇數");
    }else{

        int i,j;
        int k=1;
        int magicSquare[N][N];
    
        for(int a=0;a<N;a++){
            for(int b=0;b<N;b++){
                magicSquare[a][b]=0;
            }
        }
    
    
        j=(N-1)/2;
        magicSquare[0][j]=1;
        k=k+1;
        
        while(k<=N*N){
                
            i=i-1;
            j=j-1;
            if(i<0) i=N+i;
            if(j<0) j=N+j;
            
            if(magicSquare[i][j]==0){
    
                magicSquare[i][j]=k;   
                
            }else if(magicSquare[i][j]!=0){
                
                //--還原--
                i=i+1;
                j=j+1;
                if(i>N-1) i=i-N;
                if(j>N-1) j=j-N;
                //---------
                
                i=i+1;
                if(i>N-1) i=i-N;
                magicSquare[i][j]=k;
                
            }
            
            k=k+1;
    
        }
        
        for(int a=0;a<N;a++){
            for(int b=0;b<N;b++){
                printf("%2d   ",magicSquare[a][b]);
            }
            printf("\n");
            
        }
        printf("\n");
        
    }
}
