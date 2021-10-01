#include <stdio.h>
#include <stdlib.h>
#define SIZE 8
#define K  3


void efficient(const int source[], int val[], int pos[], int size);
void reconstruct(int source[], int m, const int val[], const int pos[], int n);
void printVector(int array[], int size);

int main()
{
    int vector[SIZE]= {0,0,23,0,-7,0,0,48};
    int val[K] ={0};
    int pos[K] ={0};

    efficient(vector,val,pos,SIZE);

    int reconstructVector[SIZE]={0};
    int reconstructVal[K]={3,-5,50};
    int reconstructPos[K]={1,4,6};

    reconstruct(reconstructVector,SIZE,reconstructVal,reconstructPos,K);

    return 0;
}

void efficient(const int source[], int val[], int pos[], int size){

    int i;
    int a =0;

    for (i=0;i<size;i++){ //loops through the array
        if(source[i] !=0){ //checks if the element is not 0
            val[a]=source[i]; //stores value
            pos[a]=i; //stores the position
            a++;
        }
    }
    printVector(val,K);
    printf("\n");
    printVector(pos,K);
}

void reconstruct(int source[], int m, const int val[], const int pos[], int n){

        int i;
        for(i=0;i<n;i++){
            source[pos[i]]=val[i]; //index value of pos is same as value in val
        }
        printf("\n");
        printVector(source,m);
    }

void printVector(int array[],int size){

    int i;
    for(i=0;i<size;i++){//loops through the array and prints it
        printf("%3d ", array[i]);
    }
}
