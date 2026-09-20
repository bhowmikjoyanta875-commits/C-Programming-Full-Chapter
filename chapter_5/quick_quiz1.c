#include <stdio.h>

int main()
{
    float a, area;
    printf("Enter the side of square: ");
    scanf("%f", &a);

    area = a * a;

    printf("Area of square %.2f\n", area);
    return 0;
}