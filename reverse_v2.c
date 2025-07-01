#include "stdio.h"

int main(){

    char name_str[20];
    int i;


    for(i=21;i>=0; i--){
        name_str[i]= getchar();
        printf("\n");
        putchar(name_str[i]); //It's obtaining stdout and printing it out not obtaining from getchar()
        // The next call of getchar() obtains the next char in the input stream 
                               //and then stores it in at the required index of name_str[]
    }
    //bit pattern ==> content of a variable 

        printf("%s\n",name_str);
        
        // EOF;

    
    return 0;
}

