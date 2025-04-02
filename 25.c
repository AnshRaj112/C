#include <stdio.h>

int maxDigitOf2(int num){
    int a, b;
    if (num >= 99 || num <= 10){
        printf("Enter only 2 digit numbers");
    } else {
        a = num%10;
        b = num/10;
        if (a>b){
            printf("The greatest number is %d", a);
        } else {
           printf("The greatest number is %d", b);
        }
    }
}

int main() {
    int num, max;
    printf("Enter a 2 digit number: ");
    scanf("%d", &num);
    max = maxDigitOf2(num);
}