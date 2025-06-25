#include "stdio.h"

int main(){

    int start_temp,stop_temp,step;
    float ratio,conv;


    start_temp = 0;
    stop_temp = 300;
    step = 20;
    ratio = 9.0/5.0;
    

    printf("CELCIUS\t\tFARENHEIGHT\n");


    while(start_temp<=stop_temp){
        conv =  32.0 + (start_temp* ratio);
        printf("%d \t %.2f\n",start_temp,conv);
        start_temp+= step; 

        
    }



    return 0;
}