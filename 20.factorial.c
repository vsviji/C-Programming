#include <stdio.h>

int calculateFactorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        int result = 1;
        for (int i = 2; i <= n; i++) {
            result *= i;
        }
        return result;
    }
}

int main() {
    int number;
    printf("Enter the number:");
    scanf("%d",&number);
    int factorial = calculateFactorial(number);
    printf("The factorial of %d is %d\n", number, factorial);
    return 0;
}
