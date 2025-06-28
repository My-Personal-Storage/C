# include <stdio.h>

enum Level {
    LOW = 1,
    MEDIUM, // Default value is 2
    HIGH // Default value is 3
};

int main() {
    enum Level myVar = MEDIUM;

    switch (myVar) {
        case 1:
        printf("Low Level");
        break;
        case 2:
        printf("Medium level");
        break;
        case 3:
        printf("High level");
        break;
    }
    return 0;
}