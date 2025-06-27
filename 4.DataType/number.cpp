# include <stdio.h>

int main() {
    int myNum = 5;
    printf("%d\n", myNum);
    
    float myFloatNum = 3.14;
    printf("%f\n", myFloatNum);

    double myDoubleNum = 19.99;
    printf("%lf\n", myDoubleNum);

    float f1 = 35e3;
    double d1 = 12E4;

    printf("%f\n", f1);
    printf("%lf\n", d1);

    return 0;
}