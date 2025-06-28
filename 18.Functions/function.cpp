# include <stdio.h>

// Create a function
void myFunction() {
    printf("I just got executed!\n");
}

// Create a function calculateSum
void calculateSum() {
    int x = 5;
    int y = 10;
    int sum = x + y;
    printf("The sum of %d and %d is %d\n", x, y, sum);
}

int main () {
    myFunction();
    calculateSum();
    return 0;
}