#include <stdio.h>

int change(a);
int change (a){
    a = 77;
    return 0;
}
 int main(){
    int b = 80;
    change(b);
    printf("%d", b);

    return 0;
 }