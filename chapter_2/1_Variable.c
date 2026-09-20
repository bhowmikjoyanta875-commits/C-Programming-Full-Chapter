#include <stdio.h>

int main()
{
    int i = 10; // Declare and initialize 'i' with 10
    int j = i;
    int a = 2, b = 3, c = 4, d = 5;

    // %d is called format specifier
    // %d is for int,%f is for float and %c is for char

    printf("The value of i %d and value of j %d\n", i, j);
    printf("The value of a %d and value of b %d\n", a, b);
    printf("The value of c %d and value of d %d\n", c, d);
    return 0;
}