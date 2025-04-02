#include <stdio.h>
int main() {
    int num, power, i, result = 1;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the power: ");
    scanf("%d", &power);
    for (i = 1; i <= power; i++) {
        result *= num;
    }
    printf("Result: %d\n", result);
}