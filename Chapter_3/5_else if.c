#include <stdio.h>

int main()
{
    int age = 45;

    // if(age>20)
    if(age>65){
        printf("you can drive\n");
    }
    else if(age>40){
        printf("You can drive and you young");
    }
    else if(age>18){
        printf("you can drive");
    }
    else{
        printf("You cannot drive");
    }
    return 0;
}