#include <stdio.h>

int main()
{
    int i = 10;
    int* j = &i;
    int** k = &j;

    printf("The vlaue of i is %d\n", i);
    printf("The value of i is %d\n", *j);
    printf("The value of i is %d\n", *(&i));
    printf("The value of i is %d\n", **(&j));

    return 0;
}