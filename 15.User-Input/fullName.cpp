# include <stdio.h>

int main() {
    // Get Full Name
    char fullName[50];

    printf("Enter your full name: ");
    fgets(fullName, sizeof(fullName), stdin);

    printf("Your full name is: %s\n", fullName);

    return 0;
}