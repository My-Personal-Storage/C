# include <stdio.h>

int main() {
    int x = 5;
    int y = 3;

    printf("%d\n", x > y); // return 1 (true) because 5 is greater than 3

    // 2. < 
    printf("%d\n", x < y); // return 0 (false) because 5 is not less than 3

    int a = 5;
    int b = 5;
    // 3. >=
    printf("%d\n", a >= b); // return 1 (true) because 5 is greater than or equal to 5

    // 4. <=
    printf("%d\n", a <= b); // return 1 (true) because 5 is less than or equal to 5

    // 5. ==
    printf("%d\n", a == b); // return 1 (true) because 5 is equal to 5

    // 6. !=
    printf("%d\n", a != b); // return 0 (false) because 5 is not equal to 5

    return 0;
}