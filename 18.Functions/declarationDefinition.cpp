# include <stdio.h>

// Function declaration
void myFunction();

// Function declaration with parameters
int myFunction2(int x, int y);

// Function calling other function
void hello();

// Function other function
void otherFunction();

// The main method
int main() {
    myFunction();  // call the function
    
    int result = myFunction2(5, 10);
    printf("%d\n", result);

    hello(); // call the function

    return 0;
}

// Function definition
void myFunction() {
    printf("I just got executed!\n");
}

// Function definition with parameters
int myFunction2(int x, int y) {
    return x + y;
}

// Function calling other function
void hello() {
    printf("Hello World!\n");
    otherFunction();
}

// Function other function
void otherFunction() {
    printf("I am other function!\n");
}