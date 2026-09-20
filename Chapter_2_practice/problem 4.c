#include <stdio.h>

int main()
{
    // Explain step by step evaluation of 3*x/y - z+k,
    // Where x=2, y=3, z=3, k=1

    int x = 2, y = 3, z = 3, k = 1;
    float e = 3 * x / y - z + k;

    printf("The value is %f\n", e);
    
    //3 * x / y - z + k
    // 6 / y - z + k
    // 2 - 3 + 1
    //-1 + 1
    //0
    return 0;
}