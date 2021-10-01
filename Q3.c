#include <stdio.h>
#include <stdlib.h>
#define N 4

void print_diag(int mat[][N]);

int main()
{
    int matrix[][N]= {{1,12,13,49},{5,16,17,81},{9,10,11,20},{2,45,19,14}};

    print_diag(matrix);

    return 0;
}

void print_diag(int mat[][N]){

    int i,j;
    int a = 1;
    int trace=N-1;

    for(i=0;i<N;i++){ //loop for the top matrix
        for(j=0;j<=i;j++){ //
            printf("%d ", mat[i-j][j]);
        }
    }

    for(i=N;i>0;i--){ //loop for the bottom matrix
        for(j=a;j<N;j++){ //completes the diagonal loop 45,11,81
            printf("%d ",mat[trace][j]);
            trace = trace-1;
        }
        a=a+1; //shift column to next
        trace=N-1; //reset trace back to 3
    }
}
