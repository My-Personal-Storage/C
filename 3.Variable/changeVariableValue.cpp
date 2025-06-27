# include <stdio.h>

int main() {
    int myNum = 15; // myNum is 15
    myNum = 10; // myNum is now 10

    int myOtherNum = 23;

    // Assign the value of myOtherNum (23) to myNum (10)
    myNum = myOtherNum;
    printf("%d", myNum);


    int x = 5;
    int y = 10;

    int sum = x + y;
    printf("\n%d", sum);
    return 0;
}