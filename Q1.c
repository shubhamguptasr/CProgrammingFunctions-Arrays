#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Function Prototypes
void print_vector(double array[], int size);
void add_vectors(double vector1[],double vector2[],double vector3[],int n);
double scalar_prod(double vector1[],double vector2[],int n);
double norm2(double vector1[],int n);

int main(){

    int size = 11; //size of vector

    //intializing vectors
    double vector1[] = {0,1,2,3,4,5,6,7,8,9,10};
    double vector2[] = {10,9,8,7,6,5,4,3,2,1,0};
    double vector3[] = {0};

    //function calls
    //print_vector(vector1,size);
    add_vectors(vector1,vector2,vector3,size);
    scalar_prod(vector1,vector2,size);
    norm2(vector3,size);

    return 0;
}

//function definitions
void print_vector(double array[],int size){

    int i;
    for(i=0;i<size;i++){ //loops through the array and prints its elements.
        printf("%.2f,\n",array[i]);
    }
}

void add_vectors(double vector1[],double vector2[],double vector3[],int n){

    int i;
    for(i=0;i<n;i++){ //loops through the array
        vector3[i] = vector1[i] + vector2[i]; //adds vector1 & vector2 element then stores to vector3
    }
    print_vector(vector3,n); //calls print vector function
}

double scalar_prod(double vector1[],double vector2[],int n){

    int i;
    double dot_prod = 0;

    for(i=0;i<n;i++){ //loops through the array
         dot_prod = dot_prod + vector1[i]*vector2[i]; //does the dot product
    }
    printf("The scalar product is %.2f\n",dot_prod); //need a print statement to show dot product
    return dot_prod; //needs to return to a double!
}

double norm2(double vector1[],int n){

    double scalprod, norm;

    scalprod = scalar_prod(vector1,vector1,n); //scalprod holds the return of the scalar prod function
    norm = sqrt(scalprod); //using math library we can square the value.

    printf("The norm is %.2f\n", norm);

    return norm; //returns norm in double as per function.
}



/*int main(){
    int size, i;
    printf("Please input the size of the array\n");
    scanf("%d", &size);

    double vector1[size];
    double vector2[size];
    double vector3[size];

    printf("Please input %d integers for vector1 array\n", size);
    for(i=0;i<size;i++){
        scanf("%d", &vector1[i]);
    }

    printf("Please input %d integers for vector2 array\n", size);
    for(i=0;i<size;i++){
        scanf("%d", &vector2[i]);
    }
    int size = 3; //size of vector

    //intializing vectors
    double vector1[] = {2.00,4.00,6.00};
    double vector2[] = {0.00,1.00,2.00};
    double vector3[] = {};

    print_vector(vector1,size);

    return 0;
}  // CANT USE INT AND DOUBLE AT THE SAME TIME! NEED MEMORY ALLOCATION!!! */
