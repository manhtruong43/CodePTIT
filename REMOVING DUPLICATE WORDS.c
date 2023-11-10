#include <stdio.h>
#include <string.h>

int main() {
    char str[100], words[10][30]; // Declare variables to store input and words
    int numWords = 0; // Variable to keep track of the number of words
    gets(str); // Read the input string

    // Tokenize the input string into words
    char* token = strtok(str, " ");
    while (token != NULL) {
        strcpy(words[numWords], token); // Store the word in the words array
        numWords++; // Increment the word count
        token = strtok(NULL, " "); // Get the next word
    }

    // Remove repeated words
    for (int i = 0; i < numWords; i++) {
        for (int j = i + 1; j < numWords; j++) {
            if (strcmp(words[i], words[j]) == 0) {
                words[j][0] = '\0'; // Set the repeated word to an empty string
            }
        }
    }

    // Print the non-repeated words
    for (int i = 0; i < numWords; i++) {
        if (words[i][0] != '\0') {
            printf("%s ", words[i]);
        }
    }

    printf("\n");

    return 0;
}
