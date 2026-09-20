#include <stdio.h>

int factorial(int);

// Factorial 5 = 1 x 2 x 3 x 4 x 5
// Factorial 4 = 1 x 2 x 3 x 4
// Factorial 3 = 1 x 2 x 3
// Factorial n = 1 x 2 x 3 x .... x n
// Factorial n-1 = 1 x 2 x 3 x .... x n-1

int factorial(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

int main()
{
    int a = 4;

    printf("The factorial of %d is %d", a, factorial(a));

    return 0;
}