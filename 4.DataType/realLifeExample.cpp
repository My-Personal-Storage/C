# include <stdio.h>

int main() {
    // Create variables of different data types
    int items = 50;
    float const_per_item = 9.99;
    float total_cost = items * const_per_item;
    char currency = '$';

    // print the variables
    printf("Number of items : %d\n", items);
    printf("Cost per item : %.2f %c\n", const_per_item, currency);
    printf("Total cost = %.2f %c\n", total_cost, currency);

    return 0;
}