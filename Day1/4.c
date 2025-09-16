// If the length of three sides of a triangle are entered through they keyboard, write a program to check whether the tiranlge is an isosceles, an equilateral, a scalen or a right-angled triangle

#include <stdio.h>
int main(){
	int a, b, c;
	printf("Enter the value of a: ");
	scanf("%d", &a);
	printf("Enter the value of b: ");
	scanf("%d", &b);
	printf("Enter the value of c: ");
	scanf("%d", &c);
	if ( c*c == a*a + b*b){
		printf("It is a right angled triangle");
	} else {
		if ( a == b || b == c|| c == a){
			printf("It is an isosceles triangle");
		} else {
			if ( a == b && a == c && c == b){
				printf("It is an equilateral triangle");
			} else {
				printf("It is a scalen triangle");
			}
		}
	}
	return 0;
}
