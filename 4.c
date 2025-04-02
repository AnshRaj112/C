// 120Rs for every hour if work time is above 40 hours
#include <stdio.h>
int main () {
    int hour, rate, outpay_salary, employee = 1;
    while (employee <= 10) {
        printf("Enter the number of hours worked by the employee: ");
        scanf("%d", &hour);
        if (hour >= 40){
            outpay_salary = (hour - 40) * 120;
            printf("The outpay salary of the employee is: %d\n", outpay_salary);
        } else {
            outpay_salary = 0;
            printf("The outpay salary of the employee is: %d\n", outpay_salary);
        }
        employee = employee + 1;        
    }
    return 0;
}