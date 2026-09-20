#include <stdio.h>

//Function prototype
int sum(int, int);

//Function Defination
int sum(int x, int y){
    printf("The sum is %d\n", x+y);
    return x+y;
}
 int main(){
    int a = 12;
    int b = 12;

    // int c = sum(a,b);
    // printf("%d\n", c);
    sum (a,b);

    int a1 = 323;
    int b1 = 321;
    // int c1 = sum (a1,b1);
    // printf("%d\n", c1);
    sum(a1, b1); //Function call

    int a2 = 232;
    int b2 = 100;
    // int c2 = sum(a2,b2);
    // printf("%d\n", c2);
    sum(a2,b2);
    return 0;
 }