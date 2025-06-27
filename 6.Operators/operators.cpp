# include <stdio.h>

int main() {
    int myNum = 100 + 50;
    printf("%d\n", myNum);

    int sum1 = 100 + 50; // Outputs 150
    int sum2 = sum1 + 250; // Outputs 400
    int sum3 = sum2 + sum2; // Outputs 800

    // print the result
    printf("%d\n", sum1);
    printf("%d\n", sum2);
    printf("%d\n", sum3);

    return 0;
}