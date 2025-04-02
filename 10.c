#include <stdio.h>

int main() {
    int num, min, max;
    char choice = 'y'; // To control the loop

    printf("Enter a number: ");
    scanf("%d", &num);

    // Initialize min and max with the first input
    min = max = num;

    while (choice == 'y' || choice == 'Y') {
        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice);

        if (choice == 'y' || choice == 'Y') {
            printf("Enter a number: ");
            scanf("%d", &num);

            // Update min and max
            if (num < min) {
                min = num;
            }
            if (num > max) {
                max = num;
            }
        }
    }

    // Calculate and display the range
    int range = max - min;
    printf("Range of the entered numbers is: %d\n", range);

    return 0;
}
