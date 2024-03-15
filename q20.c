#include <stdio.h>
#include <string.h>

int main(){
    char first[100], last[100];
    
    printf("First name?\n");
    scanf("%s", first);
    printf("Last name?\n\n");
    scanf("%s", last);
    
    printf("Full name: %s %s\n\n", first, last);
    printf("Last, First: %s, %s", last, first);
    
    return 0;
}

// *** result *** 

// First name?
// Last name?

// Full name: Steffan Hooper

// Last, First: Hooper, Steffan
