//A five  digit number is entered through the keyboard. Write a program to obtain the versed number and to determine whether the original and reversed numbers are equal or not

#include <stdio.h>
int main(){
	int number, rev = 0, flip;
	printf("Enter the five digit number: ");
	scanf("%d", &number);
	flip = number;
	for(int i = 0; i<=4; i++){
		rev = rev * 10 + flip % 10;
		flip = flip/10;
	}
	if (rev == number){
		printf("Both the numbers are equal %d %d\n", rev, number);
	} else {
		printf("Both the numbers are not equal %d %d\n", rev, number);
	}
	return 0;
}
