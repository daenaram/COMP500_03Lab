#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int whole_number;
    whole_number = 0;
    char text[80];
    printf("> ");
    scanf("%79s", text);
    whole_number = atoi(text);
    printf("C-String: ");
    printf("%s", text);
    printf("\n");
    printf("int: ");
    printf("%d\n", whole_number);
    printf("\n");

    return 0;
}

// *** RESLULT *** 
// > C-String: 47
// int: 47
