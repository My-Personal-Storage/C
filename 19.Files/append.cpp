# include <stdio.h>

int main() {
    FILE *fptr;

    // Open a file in write mode
    fptr = fopen("filename.txt", "a");

    // Append some text to the file
    fprintf(fptr, "Hi everyone!\n");

    // Close the file
    fclose(fptr);

    return 0;
}