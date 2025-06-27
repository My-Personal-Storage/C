# include <stdio.h>

int main() {
    int myNumbers[] = {10, 25, 50, 75, 100};
    printf("%zu", sizeof(myNumbers)); // Prints 20

    // How many elements are in the array
    int size = sizeof(myNumbers) / sizeof(myNumbers[0]);
    printf("\n%d\n", size);

    // Making loop array better
    int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
    int i;

    for (i = 0; i < length; i++) {
        printf("%d ", myNumbers[i]);
    }

    return 0;
}