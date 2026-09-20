// #include <stdio.h>

// int main()
// {
//     sizeof(int);
//     sizeof(char);
//     sizeof(float);
//     sizeof(double);
//     printf("Size of value int:%zu bytes\n", sizeof(int));
//     printf("Size of value float:%zu bytes\n", sizeof(float));
//     printf("Size of value char:%zu bytes\n", sizeof(char));
//     printf("Size of value double:%zu bytes\n", sizeof(double));
//     return 0;
// }

#include <stdio.h>

int main()
{
    int a = 20;
    float b = 2.25;
    char c = 'A';
    printf("value=%zu\n", sizeof(a));
    printf("value=%zu\n", sizeof(b));
    printf("value=%zu\n", sizeof(c));

    return 0;
}