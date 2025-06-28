# include <stdio.h>

int main() {
    int myAge = 43;
    int* ptr = &myAge;

    printf("%d\n", myAge);  // Outputs 43
    printf("%p\n", &myAge); // Outputs the memory address of myAge

    printf("%p\n", ptr); // Outputs the memory address of myAge
    printf("%d\n", *ptr); // Outputs the value of myAge

    return 0;
}