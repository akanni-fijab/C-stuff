#include "stdio.h"


int main(){

    int c;
    int nl_ct;
    nl_ct=0;  // I did not declare nl_ct and since it is not for it just picked something random on the heap or stack idk 

    while((c=getchar())!=EOF){

        if (c == '\n') {
            ++nl_ct;
        }
            
        
        
        // printf("%d\n",nl_ct);
    }
    printf("%d\n",nl_ct);


    return 0;
}