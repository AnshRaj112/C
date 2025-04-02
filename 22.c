#include <stdio.h>
int main() {
    int num, i, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    for (i = 0; i < num; i++) {
        if ( i % 3 == 0 && i % 5 == 0){
            sum += i;
        }
    }
    printf("The sum of multiples of 3 and 5 below %d is: %d\n", num, sum);
}