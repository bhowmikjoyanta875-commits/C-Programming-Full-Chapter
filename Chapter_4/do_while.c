#include <stdio.h>

int main()
{
    int i = 0;
    do{
        printf("This value is i %d\n", i);
        i = i+1;
    }
    while(i<5);
    return 0;
}