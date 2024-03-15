#include <stdio.h>
#include <string.h>

int main() {
    char sentence[100];
    int index;

    // Get input sentence from the user
    printf("Write a sentence?\n");
    fgets(sentence, sizeof(sentence), stdin);
    
    // Remove newline character from fgets result
    sentence[strcspn(sentence, "\n")] = 0;

    // Get the index from the user
    printf("Look up character at index?\n\n");
    scanf("%d", &index);

    // Check if the index is within the bounds of the sentence
    if (index >= 0 && index < strlen(sentence)) {
        // Print the character at the specified index
        printf("In \"%s\" index %d is the character '%c'.\n", sentence, index, sentence[index]);
    }

    return 0;
}

// *** result *** 
// Write a sentence?
