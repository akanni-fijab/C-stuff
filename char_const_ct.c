#include <stdio.h>

int main(){

//Line count using '\n'
    long c;  //char and int's are related
    int ct_nl=0;
    int ct_tab=0;
    int ct_space=0;

    while ((c=getchar())!=EOF) { //While and for are cool that way that they check conditions at the beginnig of the loop
        if(c=='\n'){
            ++ct_nl;

        }
        else if (c=='\t') {
            ++ct_tab;

        }

        else if(c==' '){
            ++ct_space;
        }
    
    }
    printf("\nThe number of new lines are %d\n",ct_nl);
    printf("The number of tab characters are %d\n",ct_tab);
    printf("The number of space charecters are %d\n",ct_space);

    return 0;
}
