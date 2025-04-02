#include <stdio.h>
int area(int a, int b){
    int area = a * b;
    return area;
}
int main() {
    int height, width, a;
    printf("Enter the height of the rectangle: ");
    scanf("%d", &height);
    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);
    a = area(height, width);
    printf("%d", a);
}