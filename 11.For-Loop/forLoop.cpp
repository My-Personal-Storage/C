# include <stdio.h>

int main() {
    int i ;

    for (i = 0 ; i < 5 ; i++) {
        printf("%d ", i);
    }

    printf("\n");

    // print even numbers
    for (i = 0 ; i < 10 ; i += 2) {
        printf("%d ", i);
    }

    printf("\n");

    // sum the numbers
    int sum = 0;
    int z;

    for (z = 0 ; z <= 10 ; z++) {
        sum += z;
    }
    printf("Sum: %d\n", sum);

    // Count down from 10 to 0
    for (i = 10 ; i >= 0 ; i--) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}