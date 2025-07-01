#include "stdio.h"

int main(){

    long nc=0;


    while(getchar() != EOF){
        ++nc;
    }
    printf("%ld\n",nc);

    double cn;
    for(cn=0; getchar() != EOF; ++cn)
        ;//I guess this is null

    printf("%.0f\n",cn);

    return 0;
}