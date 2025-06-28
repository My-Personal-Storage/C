# include <stdio.h>

void myFunction(char name[]) {
    printf("Hello %s\n", name);
}

// Multiple Parameters
void myFunction2(char name[], int age) {
    printf("Hello %s, you are %d years old\n", name, age);
}

// Calculate Sum
void calculateSum(int x, int y) {
    int sum = x + y;
    printf("The sum of %d and %d is %d\n", x, y, sum);
}

// Pass array as Function Parameter
void myFunction3(int myNumbers[5]) {
    for (int i = 0; i < 5; i++) {
        printf("%d\n", myNumbers[i]);
    }
}

// Return Values
int myFunction4(int x) {
    return 5 + x;
}

// Return values with multiple parameters
int myFunction5(int x, int y) {
    return x + y;
}

int main() {
    myFunction("John");
    myFunction("Jane");
    myFunction("Jim");
    myFunction2("John", 25);
    myFunction2("Jane", 30);
    myFunction2("Jim", 35);
    calculateSum(5, 10);
    calculateSum(20, 25);
    calculateSum(30, 35);

    int myNumbers[5] = {1, 2, 3, 4, 5};
    myFunction3(myNumbers);

    printf("%d\n", myFunction4(5));

    printf("%d\n", myFunction5(5, 10));

    // store the return value in a variable
    int result = myFunction5(20, 30);
    printf("%d\n", result);

    return 0;
}