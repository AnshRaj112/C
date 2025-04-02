#include <stdio.h>
int main() {
    int num, fact = 1, count = 1;
    printf("Enter the number: ");
    scanf("%d", &num);
    while ( count <= num) {
        fact = fact * count;
        count++;
    }
    printf("The factorial of the number is: %d\n", fact);
}