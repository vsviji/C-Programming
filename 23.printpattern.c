#include <stdio.h>

void printPattern(int height, int width, char pattern) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            printf("%c", pattern);
        }
        printf("\n");
    }
}

int main() {
    int height = 5;
    int width = 10;
    char pattern = '*';

    printPattern(height, width, pattern);

    return 0;
}
