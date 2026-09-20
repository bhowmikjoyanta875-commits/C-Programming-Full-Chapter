#include <stdio.h>

int main()
{
    // write a program to print frist n natural number using do-while loop
    int n, i=1;
    scanf("%d", &n);
    do{
        printf("This value is i %d\n ", i);
        i = i +1;
    }
    while(i<=n);
    return 0;
}