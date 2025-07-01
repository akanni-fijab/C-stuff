#include "stdio.h"

int main(){

    char name_str[20];
    int i;


    for(i=21;i>=0; i--){
        name_str[i]= getchar();
        printf("\n");
    }
    //bit pattern ==> content of a variable 

        printf("%s\n",name_str);
        
        // EOF;

    
    return 0;
}

