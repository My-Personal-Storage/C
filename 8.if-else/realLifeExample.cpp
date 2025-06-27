# include <stdio.h>

int main() {
    // 1. Open a door
    int doorCode = 1337;
    if (doorCode == 1337) {
        printf("Correct code\nThe door is open\n");
    }
    else {
        printf("Incorrect code\nThe door is closed\n");
    }

    // 2. Number positive or negative
    int myNum = 10;
    if (myNum > 0) {
        printf("The number is positive\n");
    }
    else if (myNum < 0) {
        printf("The number is negative\n");
    } 
    else {
        printf("The number is 0\n");
    }

    // 3. Check person is old enough to vote
    int myAge = 25;
    int votingAge = 18;

    if (myAge >= votingAge) {
        printf("You are old enough to vote\n");
    }
    else {
        printf("You are not old enough to vote\n");
    }

    // 4. Check number is even or odd
    int myNum2 = 5;

    if (myNum2 % 2 == 0) {
        printf("%d is even\n", myNum2);
    }
    else {
        printf("%d is odd\n", myNum2);
    }

    return 0;
}