#include <stdio.h>

void sumOfDivisors(int num) {
    int count = 0;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            count += i;
        }
    }
    printf("Sum of divisors of %d is: %d\n", num, count);
}

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    sumOfDivisors(num);
    return 0;
}
