#include <stdio.h>

int main()
{
    int age = 20;

    if(age>15){
        printf("We are inside if\n");
        printf("your age is greater than 15");
    }
    if(age%5==0){
        printf("We are inside if\n");
        printf("Your age is divisible by 5");
    }
    return 0;
}