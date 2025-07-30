#include <stdio.h>
void mario(int height){
    //To print it the number of times required 
    int i =0;

    for(i=0; i<height; i++){
        // printf("#");
        // space-=1;
        
        printf("#");
     }
     
     printf("\n"); // makes it such that each call of the function startns on a new line
}


int main(void){
    int height,i,ini_space;
    
     
    do{
        printf("Height: ");
        scanf("%d",&height);

    }
    while(height<1);
    int dummy=height;

    for(i=1; i<=height; i++){ // To now print it out on the required line
        // mario(i+1);
        
        for(ini_space=dummy-1;ini_space>0; ini_space--){// Print out (height - 1) spaces
            printf(" ");
        }
        mario(i);
        dummy-=1;
    }
   

    return 0;
}
