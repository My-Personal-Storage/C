# include <stdio.h>

int main() {
    int x = 10;
    x += 5; // x = x + 5
    printf("%d\n", x); // 15

    // 2. -= 
    int y = 10;
    y -= 5; // y = y - 5
    printf("%d\n", y); // 5

    // 3. *=
    int z = 10;
    z *= 5; // z = z * 5
    printf("%d\n", z); // 50

    // 4. /=
    int a = 10;
    a /= 5; // a = a / 5
    printf("%d\n", a); // 2

    // 5. %=
    int b = 10;
    b %= 5; // b = b % 5
    printf("%d\n", b); // 0

    // 6. &=
    int c = 10;
    c &= 5; // c = c & 5
    printf("%d\n", c); // 0
    // 1010 & 0101 = 0000

    // 7. |=
    int d = 10;
    d |= 5; // d = d | 5
    printf("%d\n", d); // 15
    // 1010 | 0101 = 1111

    // 8. ^=
    int e = 10;
    e ^= 5; // e = e ^ 5
    printf("%d\n", e); // 15
    // 1010 ^ 0101 = 1111

    // 9. >>=
    int f = 10;
    f >>= 5; // f = f >> 5
    printf("%d\n", f); // 0
    // 1010 >> 0101 = 0000

    // 10. <<=
    int g = 10;
    g <<= 5; // g = g << 5
    printf("%d\n", g); // 320
    // 1010 << 0101 = 10100000

    return 0;
}