#include "stdio.h"
#include "string.h"
const char lucky_name[] ="akanni";

// Soo yeah this code is completely wrong cuz for some reson strncmp evalutes to zero when true for some reson
void name_comparer(char userName[]){ 
    //check if they are exactly the same
    if(strncmp(userName, lucky_name, strlen(lucky_name)) && strlen(userName) == strlen(lucky_name)){
        printf("The names are the same, Have a great day %s\n",userName);

    }
    // check if the are a little similar but not the same
    else if(strncmp(userName, lucky_name, strlen(lucky_name)) && strlen(userName) != strlen(lucky_name))  {
        printf("You cheekey boy, the first part is the same but is not equal %s\n",userName);
        
    }
    //Check if the have some slight similarity
    else if (strncmp(userName, lucky_name, 4)) {
        printf("The names are kinda similar %s\n",userName);
    
    }
    //Check if there is no similarity 

    else {
    printf("Wait a minute, who are youuuuuu???? %s\n",userName);
    }
}

int main (){
    //Small note on pointers<==> a pointer is basically a picture of a painting, you can't modify the painting form the picture
    // hence pointers can't be modified or rarher they cna't modify what they reference

    char * my_name = "Al Hassan Fijabi";
// the null charcter is what marks the end of variables, i think ==> \0

    printf("%d\n",strlen(my_name));


    name_comparer("akanni");
    name_comparer("akanni_v2");
    name_comparer("akanoooo");
    name_comparer("Jose");

    return 0;

    

}