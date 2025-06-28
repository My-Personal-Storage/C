# include <stdio.h>

int main() {
    // Multiple Inputs
    int myNum;
    char myChar;

    // Ask the user to type a number AND a character
    printf("Type a number AND a character: \n");

    // Get the user's input
    scanf("%d %c", &myNum, &myChar);

    // Print the number and character the user entered
    printf("Your number is: %d\n", myNum);
    printf("Your character is: %c\n", myChar);

    return 0;
}

