#include <stdio.h>
int main() {
    int num, power, result = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the power: ");
    scanf("%d", &power);
    while( power > 0) {
        result *= num;
        power--;
    }
    printf("Result: %d\n", result);
}