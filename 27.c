//Need to redo later on, good question

#include<stdio.h>
float lowerThan3Digits (int num, int digit){
    int counter = 0, totalSum = 0;
    if (num < 0){
        num = num*-1;
    }
    while (num != 0){
        if (num % 10 < digit){
            counter++;
            totalSum += num%10;
        }
        num = num/10;
    }
    printf("The total number of digits less than the digit is %d \n", counter);
    return (float)totalSum/counter;
}

int main(){
    int num, digit;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the digit: ");
    scanf("%d", &digit);
    printf("The average is %.2f", lowerThan3Digits(num, digit));
}