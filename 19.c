#include <stdio.h>
int main () {
    int i, multiple = 1, n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++){
        multiple = n * i;
        printf("%d ", multiple);
    }
}