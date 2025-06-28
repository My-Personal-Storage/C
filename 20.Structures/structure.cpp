# include <stdio.h>
# include <string.h>

// Create a structure called myStructure
struct myStructure {
    int myNum;
    char myLetter;
    char myString[30];
};

int main() {
    // Create a structure variable of myStructure called s1
    struct myStructure s1;
    struct myStructure s2;
    struct myStructure s3 = {10, 'A', "Some text"};

    // Copy structure
    struct myStructure s4 = s3;

    // Assign values to members of s1
    s1.myNum = 13;
    s1.myLetter = 'B';

    strcpy(s1.myString, "Some text");
    
    s2.myNum = 10;
    s2.myLetter = 'A';

    // Modify structure
    s3.myNum = 15;
    s3.myLetter = 'B';
    strcpy(s3.myString, "Some other text");

    // Print values
    printf("My number: %d\n", s1.myNum);
    printf("My letter: %c\n", s1.myLetter);
    printf("My string: %s\n", s1.myString);

    printf("My number 2: %d\n", s2.myNum);
    printf("My letter 2: %c\n", s2.myLetter);

    printf("%d %c %s\n", s3.myNum, s3.myLetter, s3.myString);

    return 0;
}