#include <stdio.h>
int main() {
    int number, power, result;
    printf("Enter the number: ");
    scanf("%d", &number);
    printf("Enter the power: ");
    scanf("%d", &power);
    result = 1;
    while (power > 0){
        result = result * number;
        power = power - 1; //after every loop the power decreased by 1
    }
    printf("The result is: %d\n", result);
}