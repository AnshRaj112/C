//If ages of Ram, Shyam and Ajay are input through the keyboard, write a program to determine they youngest of the three

#include <stdio.h>
int main(){
	int age_Ram, age_Shyam, age_Ajay;
	printf("Enter the age of Ram: ");
	scanf("%d", &age_Ram);
	printf("Enter the age of Shyam: ");
	scanf("%d", &age_Shyam);
	printf("Enter the age of Ajay: ");
	scanf("%d", &age_Ajay);
	if (age_Ram > age_Shyam){
		if (age_Shyam > age_Ajay){
			puts("Ajay is the youngest");
		} else {
			puts("Shyam is the youngest");
		}
	} else {
		if (age_Ram > age_Ajay){
			puts("Ajay is the youngest");
		} else {
			puts("Ram is the youngest");
		}
	}
	return 0;
}
