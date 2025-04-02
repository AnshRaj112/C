#include <stdio.h>
int main () {
    int totalNumber, numberCount, number, positiveCount = 0, negativeCount = 0, zeroCount = 0;
    printf("Enter the total number you want to insert: ");
    scanf("%d", &totalNumber);
    numberCount = 0;
    while ( numberCount < totalNumber) {
        printf("Enter the number you want to insert: ");
        scanf("%d", &number);
        if ( number == 0){
            zeroCount++;
        } else if (number > 0) {
            positiveCount++;
        } else {
            negativeCount++;
        }
        numberCount++;
    }
    printf("\nNumber of positive integers: %d\n", positiveCount);
    printf("Number of negative integers: %d\n", negativeCount);
    printf("Number of zeros: %d\n", zeroCount);
}