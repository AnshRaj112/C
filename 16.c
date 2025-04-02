// 1 Million right now or 1 cent that doubles every day 30 days
#include <stdio.h>
int main () {
    int cent, money;
    money = 1000000;
    cent = 1;
    for (int i = 1; i<= 30; i++){
        cent *= 2;
    }
    printf("Cent = %d dollars, Money = %d dollars \n", cent/100, money);
}