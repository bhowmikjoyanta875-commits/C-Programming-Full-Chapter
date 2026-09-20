#include <stdio.h>

int main()
{
    int a = 5;
    int b = 3;
    int c = a+b;
    printf("The value of a %d\n The value of b %d\n The value of c %d\n", a ,b ,c);

    // Modulus operator is used to get the reminder

    printf("The remainder when a is divided by b is : %d\n", a%b);

    //This dose not work exponentiation in c
    // int d = a^b;
    return 0;
}

// int b=2, c=3;
// int z; z = b*c; \\legel
// int z; b*c = z; \\illegel 



// no operator is assumed to be present
// int i = ab; //invaild
// int i = a*b;  //vaild
