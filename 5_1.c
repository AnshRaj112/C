#include <stdio.h>
int main() {
    int num, i = 1, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (i <= num) {
        fact = fact * i;
        i++;        
    }
    printf("Factorial of %d is: %d\n", num, fact);
}