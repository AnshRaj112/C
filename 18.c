#include <stdio.h>
int main() {
    int i, n, sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for (i = 0; i <= n; i++) {
        sum += i;
    }
    printf("%d ", sum);
}