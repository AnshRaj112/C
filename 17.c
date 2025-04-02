#include <stdio.h>
int main() {
    int i, n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for (i = 0; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");
    for ( i = n; i >= 0; i--) {
        printf("%d ", i);
    }
}