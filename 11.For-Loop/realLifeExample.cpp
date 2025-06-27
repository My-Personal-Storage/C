# include <stdio.h>

int main() {
    // Program to print the numbers from 0 to 100 in steps of 10
    int i;
    for (i = 0; i <= 100; i += 10) {
    printf("%d ", i);
    }

    printf("\n");

    // Program to only print the even numbers from 0 to 10
    for (i = 0; i <= 10; i += 2) {
        printf("%d ", i);
    }

    printf("\n");

    // Program to only print the odd numbers from 0 to 10
    for (i = 1; i <= 10; i += 2) {
        printf("%d ", i);
    }
    
    return 0;
}