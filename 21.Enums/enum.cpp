# include <stdio.h>

enum Level {
    LOW = 25,
    MEDIUM = 50,
    HIGH // Value is 51
};

int main() {
    enum Level myVar = HIGH;
    printf("%d\n", myVar);
    return 0;
}