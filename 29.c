#include <stdio.h>

void sumOfDivisors(int num) {
    int count = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            count += i;
        }
    }
    if(count == num){
        printf("%d is a perfect number.\n", num);
    }
}

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    sumOfDivisors(num);
    return 0;
}
