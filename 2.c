#include <stdio.h>
int main() {
    int count = 1;
    int number_of_stars;
    printf("Enter the number of stars you want to print: ");
    scanf("%d", &number_of_stars);
    while (count <= number_of_stars){
        printf("*\n");
        count = count+1;
    }
}