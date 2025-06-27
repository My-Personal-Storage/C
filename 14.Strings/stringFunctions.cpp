# include <stdio.h>
# include <string.h>

int main() {
    char alphabet[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%zu\n", strlen(alphabet)); // Outputs 26
    printf("%zu\n", sizeof(alphabet)); // Outputs 50

    // Concatenate Strings
    char str1[20] = "Hello ";
    char str2[] = "World";

    // Concatenate Str2 to Str1 (result is stored in Str1)
    strcat(str1, str2);
    
    // Print the result
    printf("%s\n", str1);

    // Copy string
    char str3[20] = "Old World";
    char str4[20];

    // Copy Str3 to Str4
    strcpy(str4, str3);

    printf("%s\n", str4);

    // Compare Strings
    char str5[] = "Hello";
    char str6[] = "World";

    // Compare Str5 and Str6
    printf("%d\n", strcmp(str5, str6)); // Return -1 because Str5 is less than Str6

    // Compare str2 and str6
    printf("%d\n", strcmp(str2, str6)); // Return 0 because Str2 is equal to Str6

    return 0;
}