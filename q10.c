#include <stdio.h>
#include <string.h>

int main(){
    
    char lower;
    char upper;
    
    printf("Input a lower case character:\n");
    scanf(" %c", &lower);
    printf("Input an upper case character:\n\n");
    scanf(" %c", &upper);
    
    char lower_to_upper = upper - 'A' + 'a';
    char upper_to_lower = lower - 'a' + 'A';
    
    printf("lower %c equivalent upper is %c.\n", lower, upper_to_lower);
    printf("upper %c equivalent lower is %c.\n", upper, lower_to_upper);
    
    return 0;
}

// *** RESULT ***
// Input a lower case character:
// Input an upper case character:

// lower n equivalent upper is N.
// upper M equivalent lower is m.
