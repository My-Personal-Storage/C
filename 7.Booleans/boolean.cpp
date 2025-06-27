# include <stdio.h>
# include <stdbool.h>

int main() {
    bool isProgrammingFun = true;
    bool isFishTasty = false;

    // Return boolean values
    printf("%d\n", isProgrammingFun); // 1 (true)
    printf("%d\n", isFishTasty); // 0 (false)

    // Use Equal to Operator
    printf("%d\n", 10 == 10); // 1 (true), because 10 is equal to 10
    printf("%d\n", 10 == 15); // 0 (false), because 10 is not equal to 15
    printf("%d\n", 5 == 55); // 0 (false), because 5 is not equal to 55

    // Example
    bool isHamburgerTasty = true;
    bool isPizzaTasty = true;

    // find out if both hamburger and pizza are tasty
    printf("%d\n", isHamburgerTasty == isPizzaTasty); // 1 (true), because both are tasty

    return 0;
}