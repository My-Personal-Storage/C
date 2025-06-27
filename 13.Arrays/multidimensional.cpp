# include <stdio.h>

int main() {
    int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };

    printf("%d\n", matrix[0][2]);  // Outputs 2

    // Change an element
    matrix[0][0] = 9;

    printf("%d\n", matrix[0][0]);

    // Loop through the array
    int i, j;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Three dimensional array
    int example[2][3][4] = {
        {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12}
        },
        {
            {13, 14, 15, 16},
            {17, 18, 19, 20},
            {21, 22, 23, 24}
        }
    };

    printf("%d\n", example[0][2][3]);
    
    return 0;
}