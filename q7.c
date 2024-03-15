#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    double real_number;
    real_number = 0;
    char text[80];
    printf("> ");
    scanf("%79s", text);
    real_number = atof(text);
    printf("C-String: ");
    printf("%s\n", text);
    printf("double: %f\n\n", real_number);

    return 0;
}

// *** RESULT *** 
// 	> C-String: 4.7
// double: 4.700000
