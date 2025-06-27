# include <stdio.h>

int main() {
    int myAge = 25;
    int votingAge = 18;

    if (myAge >= votingAge) {
        printf("You are eligible to vote!");
    }
    else {
        printf("You are not eligible to vote!");
    }

    return 0;
}