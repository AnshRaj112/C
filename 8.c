#include <stdio.h>
int main() {
    int numberOfMatchsticks = 21, numberOfMatchsticksPicked, computerPick;
    while (numberOfMatchsticks > 1) {
        printf("Enter the number of matchsticks picked between 1 to 4: ");
        scanf("%d", &numberOfMatchsticksPicked);
        if (numberOfMatchsticksPicked > 4 || numberOfMatchsticksPicked < 1){
        } else {
            computerPick = 5 - numberOfMatchsticksPicked;
            numberOfMatchsticks = numberOfMatchsticks - numberOfMatchsticksPicked;
            printf("Remaining matchsticks: %d\n", numberOfMatchsticks);
            if (numberOfMatchsticks == 1) {
                printf("You lost!\n");
                break;
            }
        }
    }
}