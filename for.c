#include "stdio.h"



int main(){

    
   int i;

    for(i=0; i<=100; i++){
        if(i%2 == 0){
            printf("The number %d is an even number\n",i);
        }

    }

 

    int my_array[4]={123,455,9000,99};
    int my_array_sum = 0;

    int j;
    for(j=0; j<4; j++){
        my_array_sum += my_array[j];


    }
    printf("The summation of the array is %d",my_array_sum);


    // trying to calculate factorial of an array using for loops

    


    return 0;
}