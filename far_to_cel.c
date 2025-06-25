#include <stdio.h>


int main(){

    // int i,j;

    // for(i=0;i<11; i++){
    //     for (j=0; j<5; j++) {
    //         printf("#");
        
    //     }
    //     printf("\n");

    // }

    // printf("I will suceed\n"); // \b just says mive the cursor back by one 


    float ratio;
    float conv;
    int start,stop,step;

    start = 0;
    stop = 300;
    step = 20;
    ratio = 5.0/9.0;
   
    

    printf("Farenheight\tCelcius\n");

    while(start <= stop){
        conv = ratio *(start -32);
        printf("%d\t\t%5.1f\n",start,conv);
        start+=step;

    }

    // %x.yf x chars wide and to y decimal palces

    return 0;
} 