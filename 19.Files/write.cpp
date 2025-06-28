# include <stdio.h>

int main() {
    FILE *fptr;

    // Open a file in write mode
    fptr = fopen("filename.txt", "w");

    // Write some text to the file
    fprintf(fptr, "Hello World!\n");

    // Close the file
    fclose(fptr);

    return 0;
}