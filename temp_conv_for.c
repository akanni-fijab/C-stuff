#include "stdio.h"

int main()  
{

    float start;

    for(start = 300.0; start>=0; start-=20){
        printf("%f\n",(5.0/9) * (start-32));
    }

    return 0;
}