#include <stdio.h>

int main(){
    char first, last;
    
    printf("What is the first letter of your first name?\n");
    scanf(" %c", &first);
    printf("What is the first letter of your last name?\n");
    scanf(" %c", &last);
    printf("Your initials are: %c%c", first, last);
    
    return 0;
}

// *** result *** 
// What is the first letter of your first name?
// What is the first letter of your last name?
// Your initials are: JK
