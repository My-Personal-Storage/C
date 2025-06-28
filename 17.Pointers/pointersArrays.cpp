# include <stdio.h>

int main() {
    int myNumbers[4] = {25, 50, 75, 100};
    int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
    int i;

    for (i = 0; i < 4; i++) {
        printf("%d\n", &myNumbers[i]);
    }

    // Get the memory address of the array
    printf("%p\n", myNumbers);

    // Get the memory address of the first element of the array
    printf("%p\n", &myNumbers[0]);

    // Get the value of the first element of the array
    printf("%d\n", *myNumbers);

    // Get the value of the second element of the array
    printf("%d\n", *(myNumbers + 1));

    // Or we can use loop through the array
    for (i = 0 ; i < length; i++) {
        printf("%d\n", *(myNumbers + i));
    }

    // Change the value of the first element of the array
    *(myNumbers + 0) = 100;

    // Print the value of the first element of the array
    printf("%d\n", *myNumbers);

    return 0;
}