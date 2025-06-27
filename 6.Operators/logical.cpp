# include <stdio.h>

int main() {
    //  1. && (AND)
    int x = 5;
    int y = 3;
    printf("%d\n", x > 3 && y < 10); // return 1 (true) because 5 is greater than 3 and 3 is less than 10

    // 2. || (OR)
    printf("%d\n", x > 3 || y < 10); // return 1 (true) because 5 is greater than 3 or 3 is less than 10

    // 3. ! (NOT)
    printf("%d\n", !(x > 3 && y < 10)); // return 0 (false) because !(5 is greater than 3 and 3 is less than 10)

    return 0;
}