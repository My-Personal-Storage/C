# include <stdio.h>

int main() {
    float myFloatNum = 3.5;
    double myDoubleNum = 19.99;

    printf("%f\n", myFloatNum); // Outputs 3.500000
    printf("%lf\n", myDoubleNum); // Outputs 19.990000
    printf("%.01lf\n", myDoubleNum); // Outputs 19.990000

    printf("%.1f\n", myFloatNum); // Only Show 1 digit
    printf("%.2f\n", myFloatNum); // Only Show 2 digit
    printf("%.4f\n", myFloatNum); // Only Show 4 digit

    return 0;
}