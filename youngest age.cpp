#include <stdio.h>

int main() {
    int number;

    // Prompt the user to enter a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Check if the input is positive
    if (number > 0) {
        // Check divisibility by 5 and 3
        if (number % 5 == 0 && number % 3 == 0) {
            printf("%d is divisible by both 5 and 3.\n", number);
        } else {
            printf("%d is not divisible by both 5 and 3.\n", number);
        }
    } else {
        printf("Please enter a positive integer.\n");
    }

    return 0;
}

