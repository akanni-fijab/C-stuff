#include "stdio.h"

int main(){

    char name_str[7];
    int i;


    for(i=6;i>=0; i--){
        name_str[i]= getchar();
    }

        printf("%s\n",name_str);


    return 0;
}