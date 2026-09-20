#include <stdio.h>
int main   
#include <stdio.h>

int main()
{ 
    //Write a programe to sum first 10 natural number using while loop
    
    int n, i = 1, sum = 0;
    printf("The value of ");
    scanf("%d", &n);
    while(i<=n){
        printf("Sum= %d\n", i);
        sum = sum + i;
        i = i + 1;
    }
    return 0;
}