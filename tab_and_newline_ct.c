#include <stdio.h>

int main(){

//Line count using '\n'
    long c;  //char and int's are related
    int line_ct_nl=0;
    int line_ct_tab=0;

    while ((c=getchar())!=EOF) { //While and for are cool that way that they check conditions at the beginnig of the loop
        if(c=='\n'){
            ++line_ct_nl;

        }
        else if (c=='\t') {
            ++line_ct_tab;

        
        }
    
    }
    printf("\nThe number of new lines are %d\n",line_ct_nl);
    printf("The number of tab characters are %d\n",line_ct_tab);

    return 0;
}
