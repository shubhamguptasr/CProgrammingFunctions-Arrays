#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 3

int is_diag_dom(int mat[][N]);

int main()
{
    int matrix[][N]= {{4,-2,1},{1,-4,2},{-1,2,4}};
    is_diag_dom(matrix);

    return 0;
}

int is_diag_dom(int mat[][N]){

    int i,j;
    int shift = 0;
    double sum = 0;
    int diag_ele;

    for(i=0;i<N;i++){ //loops rows
        for(j=0;j<N;j++){ //loops columns
            if(i==j){ //checks if matrix is same row and column
                diag_ele = fabs(mat[i][j]); //sets this as the diag element!
            }
            else{
                sum = sum + fabs(mat[i][j]); //adds it to the sum
            }
        }
        if(diag_ele>sum){
            shift++; //incremeants a count if true
        }sum=0;
    }

    if(shift==N){ //there will be same amount of diag as N!
        printf("The matrix is diagonally dominant\n");
        return 1;
        }else{
            printf("The matrix is NOT diagonally dominant\n");
        return 0;
        }
    }
