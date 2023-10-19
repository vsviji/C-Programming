#include <stdio.h>
#include <string.h>
int main() {
    char original[] = "Hello, World!";
    char reversed[100]; // Assuming a maximum length of 100 characters for the reversed string
    int length = strlen(original);
    
    for (int i = 0; i < length; i++) {
        reversed[i] = original[length - i - 1];
    }
    reversed[length] = '\0'; // Null-terminate the reversed string

    printf("%s\n", reversed);
    return 0;
}
