#include <stdio.h>
int main(){
    
    char colour [11];
    printf("What is your favourite colour?\n");
    scanf(" %10[^\n]", colour);
    printf("You like the colour %s.", colour);
    
    return 0;
}

// *** RESULT *** 
// What is your favourite colour?
// You like the colour red.
