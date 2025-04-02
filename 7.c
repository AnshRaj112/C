#include <stdio.h>
int main() {
    int ones, tens, hundred, i = 0;
    while (i <= 500) {
        ones = i % 10;         
        tens = (i / 10) % 10;  
        hundred = i / 100; 
         if (i == (ones * ones * ones) + (tens * tens * tens) + (hundred * hundred * hundred)) {
            printf("%d ", i);  
        }
         i++; 
    }
    return 0;
}
