# include <stdio.h>

int main() {
    // Get String Input
    char firstName[30];

    // Ask the user to enter their first name
    printf("Enter your first name: ");

    // Get the user's input
    scanf("%s", firstName);

    // Print the first name the user entered
    printf("Your first name is: %s\n", firstName);
    
    return 0;
}