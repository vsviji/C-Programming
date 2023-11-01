#include <stdio.h>

int main() {
    char sentence[] = "This is a sample sentence without built-in functions";
    char currentWord[50]; // Assuming a maximum word length of 50 characters
    int wordIndex = 0;
    
    for (int i = 0; sentence[i] != '\0'; i++) {
        char c = sentence[i];
        
        // Check if the character is a space or a delimiter
        if (c == ' ' || c == '\t' || c == '\n' || c == '\r') {
            if (wordIndex > 0) {
                currentWord[wordIndex] = '\0'; // Null-terminate the word
                printf("%s\n", currentWord);
                wordIndex = 0; // Reset the wordIndex
            }
        } else {
            currentWord[wordIndex] = c; // Add the character to the current word
            wordIndex++;
        }
    }
    
    // Print the last word if there's one remaining
    if (wordIndex > 0) {
        currentWord[wordIndex] = '\0'; // Null-terminate the last word
        printf("%s\n", currentWord);
    }
    
    return 0;
}
