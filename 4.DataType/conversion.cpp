# include <stdio.h>

int main() {
    int x = 5 ;
    int y = 2;

    int sum = 5 / 2;
    printf("%d\n", sum); // Outputs 2

    // Implisit Conversion
    float myFloat = 9;
    printf("%f\n", myFloat); // Outputs 9.000000

    // OR
    int myInt = 9.99;
    printf("%d\n", myInt); // Outputs 9



    // Explicit Conversion
    float sum2 = (float) 5 / 2;
    printf("%f\n", sum2); // Outputs 2.500000

    // OR
    int num1 = 5;
    int num2 = 2;
    float result = (float) num1 / num2;
    printf("%f\n", result); // Outputs 2.500000


    // Example Real Life
    // Set the maximum possible score in the game to 500
    int maxScore = 500;

    // The actual score of the player
    int playerScore = 450;

    /* Calculate the percantage of the player's score in relation to the maximum available score.
    Convert playerScore to float to make sure that the division is accurate. */
    float percentage = (float) playerScore / maxScore * 100;

    // print the percentage
    printf("Player percentage is : %.2f\n", percentage);

    return 0;
}