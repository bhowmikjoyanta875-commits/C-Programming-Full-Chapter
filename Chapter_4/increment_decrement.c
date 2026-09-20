#include <stdio.h>

int main()
{
    int i = 5;
    printf("This value is i %d\n", i);


    i = i+5; //10
    printf("this value is i %d\n", i);

    //i = i+1; //i=10 i=11
    i++;
    printf("this value is i %d\n", i);

    i+=2; //Same as i = i + 2
    printf("this value is i %d", i); //i=11 

    // i++ prints first and then increment (post increment operator)
    // ++i increment first and then prints (post increment operator)
    
    return 0;
}