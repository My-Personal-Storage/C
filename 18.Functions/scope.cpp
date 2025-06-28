# include <stdio.h>

// Global Scope
int myGlobalVariable = 5;

// Naming Conventions
int x = 55;

// Modify Global Variable
int z = 10;

// Local Scope
void myFunction() {
    int x = 10;
    printf("%d\n", x); // Local x

    printf("%d\n", z++); // Global z
}

int main() {
    myFunction();
    printf("%d\n", myGlobalVariable);

    printf("%d\n", x); // Global x 

    printf("%d\n", z); // Global z

    return 0;
}