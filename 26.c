#include <stdio.h>

int factorialOfNumber(int num){
    int fact = 1;
    for (int i = 1; i <= num; i++){
        fact *= i;
    }
    printf("The factorial of the number is %d", fact);
}

int main(){
    int num, factorial;
    printf("Enter the number: ");
    scanf("%d", &num);
    factorial = factorialOfNumber(num);
}