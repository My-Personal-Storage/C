# include <stdio.h>

int main() {
    int myNumbers[] = {25, 50, 75, 100};
    printf("%d\n", myNumbers[0]);

    // Change an array element
    myNumbers[0] = 33;
    printf("%d\n", myNumbers[0]);

    // Loop through the array
    int i;

    for (i = 0; i < 4; i++) {
        printf("%d ", myNumbers[i]);
    }

    // Declare an array with 5 elements
    int myNum[5];

    // Add elements to the array
    myNum[0] = 10;
    myNum[1] = 20;
    myNum[2] = 30;
    myNum[3] = 40;
    myNum[4] = 50;

    return 0;
}