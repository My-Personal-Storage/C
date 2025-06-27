# include <stdio.h>

int main() {
    char greetings[] = "Hello World!";
    printf("%s\n", greetings);

    // Access String Elements
    printf("%c\n", greetings[0]);

    // Modify String Elements
    greetings[0] = 'J';
    printf("%s\n", greetings);

    // Loop Through a String
    int i ;
    int length = sizeof(greetings) / sizeof(greetings[0]);
    for (i = 0; i < length; i++) {
        printf("-%c", greetings[i]);
    }

    return 0;
}