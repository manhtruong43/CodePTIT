#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    getchar(); // Consume the newline character after reading 't'

    for (int i = 0; i < t; i++) {
        int count = 0;
        char c[200];
        
        // Read a line of text, including spaces
        if (fgets(c, sizeof(c), stdin) != NULL) {
            char *token = strtok(c, " \n"); // Tokenize using space and newline characters

            while (token != NULL) {
                count++;
                token = strtok(NULL, " \n");
            }

            printf("%d\n", count);
        }
    }

    return 0;
}
