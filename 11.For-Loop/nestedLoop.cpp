# include <stdio.h>

int main() {
    int i, j;

    // Outer loop
    for (i = 1; i <= 2; ++i) {
    printf("Outer: %d\n", i);  // Executes 2 times

        // Inner loop
        for (j = 1; j <= 3; ++j) {
            printf(" Inner: %d\n", j);  // Executes 6 times (2 * 3)
        }
    }

    // Print the multiplication table
    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= 3; j++) {
            printf("%d ", i * j);
        }
        printf("\n");
    }

    return 0;
}