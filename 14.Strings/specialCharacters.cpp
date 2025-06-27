# include <stdio.h>

int main() {
    char txt[] = "We are the so-called \"Vikings\" from the north.";
    printf("%s\n", txt);

    char txt2[] = "It \\ backslash.";
    printf("%s\n", txt2);

    return 0;
}