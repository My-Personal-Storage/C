# include <stdio.h>

int main() {
    int myAge = 43;
    float myFloat = 333.7333;
    double myDouble = 1234567890.1234567890;
    char myLetter = 'D';

    printf("%p\n", &myAge);
    printf("%p\n", &myFloat);
    printf("%p\n", &myDouble);
    printf("%p\n", &myLetter);

    return 0;
}