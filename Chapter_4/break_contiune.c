#include <stdio.h>

int main()
{
    for (int i = 1; i<10;i++){

        if(i==7)
        break; //exit the loop now
        // continue; //skip this iteration now

        printf("the value is i %d\n", i);
    }
    printf("For loop is finished!");
    return 0;
}