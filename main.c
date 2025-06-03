#include <stdio.h> // PRE-PROCESSOR DIRECTIVE 
// #include <stdbool.h>
#define BOOL char
#define TRUE 1
#define FALSE 0
// instead of use a whole library I could just define the preprocessor directives 

int main(){

// /*
// ints are 4 bytes
// floats are 4 bytes
// doouble 8 bytes

//Width is the mininum number of characters to print

//Format specifiers specify width precision and flags 
    // int testNum;
    // testNum = 1234;
    // printf("%0d\n",testNum);
    char my_initial;
    my_initial = 'a'; // ===> it's value is 97, probably ANSI shit

    int my_int_array[5];
    my_int_array[0] = 12;
    my_int_array[1] = 13;
    my_int_array[2] = 14;
    my_int_array[3] = 15;
    my_int_array[4] = 16;

    printf("The numerical value if my initial a, is %d\n",my_initial); // obtain int val of char a

    // BOOL = 'N';
    // printf("%c",BOOL);

    if(TRUE){
        printf("I am jose ");
    }
    else{
        printf("I am tobi");
    }

    printf("The last value of my five digit array is %d,",my_int_array[4]);
    


    
    return 0;
} 