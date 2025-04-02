#include <stdio.h>
int main() {
    int power, number, answer;
    printf("Enter the number: ");
    scanf("%d", &number);
    printf("Enter the power: ");
    scanf("%d", &power);
    answer = 1;
    while (power > 0){
        answer = answer*number;
        power--;
    }
}