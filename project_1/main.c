#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int randomNumber;
    
    //initalize the random number genarator
    
    srand(time(0));

    randomNumber = (rand() % 100) + 1;

    printf("Random number: %d\n", randomNumber);

    return 0;
}