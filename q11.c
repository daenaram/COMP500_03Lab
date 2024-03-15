#include <stdio.h>
int main() {
    
    char first[100];
    char last[100];
    char course[100];
    
    printf("First name?\n");
    scanf(" %99[^\n]", first);
    printf("Last name?\n");
    scanf(" %99[^\n]", last);
    printf("Course name?\n\n");
    scanf(" %99[^\n]", course);
    printf("%s %s is studying %s.\n", first, last, course);
}
// *** RESULT *** 
// First name?
// Last name?
// Course name?

// Snow White is studying Programming for Engineering Applications.
