#include <stdio.h>
int main(){
	float red, green, blue, white, cyan, magenta, yellow, black;
	printf("Enter the value of red: ");
	scanf("%f", &red);
	printf("Enter the value of green: ");
	scanf("%f", &green);
	printf("Enter the value of blue: ");
	scanf("%f", &blue);
	if (red/255 > green/255){
		if (blue/255 > red/255){
			white = blue/255;
		} else {
			white = red/255;
			}
	} else {
		if ( blue/255 > green/255) {
			white = blue/255;
		} else {
			white = green/255;
		}
	}
	cyan = (white - (red/255))/white;
	magenta = (white - (green/255))/white;
	yellow = (white - (blue/255))/white;
	black = 1 - white;
	printf("The value of white is %f, the value of cyan is %f, the value of magenta is %f, the value of yellow is %f, the value of black is %f", white, cyan, magenta, yellow, black);
	return 0;
}
