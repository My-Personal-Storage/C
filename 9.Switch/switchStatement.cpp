# include <stdio.h>

int main() {
    int day = 4;

    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day\n");
    }

    // Break can save a lot of time, because it stops the execution of more code and continues with the next line of code
    // Default keyword specifies some code to run if there is no case match

    return 0;
}