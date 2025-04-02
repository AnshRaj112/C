#include <stdio.h>
int main () {
    int i, j, k, blankSpace, n, currentValue = 1;
    printf("Enter the number of rows: ");   
    scanf("%d", &n);
    blankSpace = n-1;
    for ( i = 1; i <= n; i++) {
        for (k = blankSpace; k >= 1; k--) {
            printf(" ");
        }
        for ( j = 1; j <= i; j++) {
            printf("%d ", currentValue);
            currentValue+=1;
        }
        printf("\n");
        blankSpace--;
    }
}

//Redo after few days