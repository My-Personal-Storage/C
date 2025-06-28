# include <stdio.h>
# include <stdlib.h>

int main() {
    // Static memory allocation
    // int students[20];
    // printf("%zu\n", sizeof(students)); // 80 bytes

    // Dynamic memory allocation
    // int *ptr = malloc(size);
    // int *ptr2 = calloc(amount, size);

    int *students;
    int numStudents = 12;
    students = calloc(numStudents, sizeof(*students)); 
    printf("%d\n", numStudents * sizeof(*students)); // 48 bytes

    return 0;
}