#include <stdio.h>

int main()
{
    char i = 'A';
    char* j = &i;

    float k = 5.354;
    float* k1 = &k;
    printf("The output of address j is %p\n", &i);
    return 0;
}