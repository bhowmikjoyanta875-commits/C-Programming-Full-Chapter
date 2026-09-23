#include <stdio.h>

int main()
{
    int numbers[5];

    printf("Enter 5 numbers:\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);
    }

    printf("The numbers are:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", numbers[i]);
    }

    return 0;
}