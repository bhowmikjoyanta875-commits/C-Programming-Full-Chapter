#include <stdio.h>

int main()
{

//decrementing

    int n;
    scanf("%d", &n);
    for(int i = 10;i;i--)
    {
        printf("%d X %d = %d\n", n, i, n);
    }
    return 0;
}